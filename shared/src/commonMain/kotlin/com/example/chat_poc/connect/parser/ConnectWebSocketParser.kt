package com.example.chat_poc.connect.parser

import com.example.chat_poc.connect.model.BotMessage
import com.example.chat_poc.connect.model.ChatItem
import com.example.chat_poc.connect.model.FlightStatusPayload
import com.example.chat_poc.connect.model.Sender
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.jsonObject
import kotlinx.serialization.json.jsonPrimitive

val DefaultJson = Json {
    ignoreUnknownKeys = true
    isLenient = true
}

/** Result of parsing a WebSocket message: the chat item and its optional timestamp (AbsoluteTime from payload). */
data class ParsedChatMessage(val item: ChatItem, val timestamp: String? = null)

/**
 * Parses a single WebSocket frame into zero or more [ParsedChatMessage].
 * Pure function; never throws. Returns empty list on invalid JSON or when topic != "aws/chat".
 */
fun parseWebSocketMessage(
    raw: String,
    json: Json = DefaultJson,
): List<ParsedChatMessage> {
    if (raw.isBlank()) return emptyList()
    return try {
        val root = json.parseToJsonElement(raw).jsonObject
        val topic = root["topic"]?.jsonPrimitive?.content ?: return emptyList()
        if (topic != "aws/chat") return emptyList()
        val payload = when (val contentEl = root["content"]) {
            null -> return emptyList()
            is kotlinx.serialization.json.JsonPrimitive -> json.decodeFromString<AwsChatPayload>(contentEl.content)
            is kotlinx.serialization.json.JsonObject -> json.decodeFromJsonElement(AwsChatPayload.serializer(), contentEl)
            else -> return emptyList()
        }
        when (payload.Type) {
            "EVENT" -> parseEvent(payload)
            "MESSAGE" -> parseMessage(payload, json)
            else -> emptyList()
        }
    } catch (_: Exception) {
        emptyList()
    }
}

private fun parseEvent(payload: AwsChatPayload): List<ParsedChatMessage> {
    val contentType = payload.ContentType ?: ""
    return when {
        contentType.contains("chat.ended") -> listOf(ParsedChatMessage(ChatItem.ChatEnded))
        else -> emptyList()
    }
}

private fun parseMessage(payload: AwsChatPayload, json: Json): List<ParsedChatMessage> {
    val content = payload.Content ?: ""
    val role = payload.ParticipantRole ?: ""
    val timestamp = payload.AbsoluteTime
    return when (role) {
        "CUSTOMER" -> listOf(ParsedChatMessage(ChatItem.Text(content, Sender.CUSTOMER), timestamp))
        "SYSTEM" -> listOf(ParsedChatMessage(ChatItem.System(content), timestamp))
        "CUSTOM_BOT" -> parseBotMessage(content, json).map { ParsedChatMessage(it, timestamp) }
        else -> emptyList()
    }
}

private fun parseBotMessage(content: String, json: Json): List<ChatItem> {
    if (content.isBlank()) return emptyList()
    if (!content.trimStart().startsWith("{")) return listOf(ChatItem.Text(content, Sender.BOT))
    return try {
        val obj = json.parseToJsonElement(content).jsonObject
        // Backend may send {"t":"md","md":"...markdown..."} — extract and treat as markdown
        val tType = obj["t"]?.jsonPrimitive?.content?.trim('"') ?: ""
        if (tType == "md") {
            val mdContent = obj["md"]?.jsonPrimitive?.content ?: ""
            return listOf(ChatItem.Markdown(mdContent))
        }
        val messageType = obj["messageType"]?.jsonPrimitive?.content?.trim('"') ?: ""
        when (messageType) {
            "markdown" -> {
                val bot = json.decodeFromString<BotMessage>(content)
                val text = bot.payload?.text ?: ""
                listOf(ChatItem.Markdown(text))
            }
            "QUICK_REPLIES" -> {
                val bot = json.decodeFromString<BotMessage>(content)
                val pl = bot.payload ?: return listOf(ChatItem.Text(content, Sender.BOT))
                listOf(ChatItem.QuickReplies(pl.title, pl.options ?: emptyList()))
            }
            "FLIGHT_STATUS" -> {
                val payloadObj = obj["payload"] ?: return listOf(ChatItem.Text(content, Sender.BOT))
                val flight = json.decodeFromString<FlightStatusPayload>(payloadObj.toString())
                listOf(ChatItem.FlightStatus(flight))
            }
            else -> listOf(ChatItem.Text(content, Sender.BOT))
        }
    } catch (_: Exception) {
        listOf(ChatItem.Text(content, Sender.BOT))
    }
}
