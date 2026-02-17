package com.example.chat_poc

import com.example.chat_poc.ui.ChatConstants

/**
 * Input configuration for the Chat Library (host → library).
 *
 * Pass from the host app when showing the bottom sheet (e.g. auth token, title, messages).
 * Connect/start-chat API config is owned by the library (from local.properties at build time).
 *
 * @param authToken Optional token for library API calls (e.g. Bearer token).
 * @param displayTitle Optional title/subtitle in header (e.g. "Chatting with Air Canada"); main title is "Virtual Assistant".
 * @param displaySubtitle Optional subtitle line in header (e.g. user name: "Chatting with Bryan"). If null, shows default "Chatting with Air Canada".
 * @param displayMessages List of messages to show in the sheet (e.g. from host or dummy).
 */
data class ChatLibraryConfig(
    val authToken: String = "",
    val displayTitle: String = "Hello from Chat Library",
    val displaySubtitle: String? = null,
    val displayMessages: List<String> = defaultDisplayMessages(),
) {
    val hasAuthToken: Boolean get() = authToken.isNotBlank()

    /** Subtitle shown in header below "Virtual Assistant". Use [displaySubtitle] for e.g. user name ("Chatting with …"); otherwise shows default. */
    fun headerSubtitle(): String = displaySubtitle?.takeIf { it.isNotBlank() }
        ?: ChatConstants.Strings.HEADER_SUBTITLE_DEFAULT
}

private fun defaultDisplayMessages(): List<String> = listOf(
    "Message 1: Welcome to the Chat Library!",
    "Message 2: Pass [ChatLibraryConfig] from the host to show custom data.",
    "Message 3: Use [ChatLibraryCallbacks] to receive events and data from the library.",
    "Message 4: Tap the action button to invoke the host-provided callback.",
    "Message 5: Drag the sheet up to expand and scroll.",
    "Message 6: Auth token is available for API calls when provided in config.",
    "Message 7: The library sends data back via [ChatLibraryCallbacks.onDataToHost].",
    "Message 8: All library logic lives in commonMain (KMP).",
    "Message 9: Android and iOS only provide thin platform bridges.",
    "Message 10: Override callbacks in your app to handle button clicks and data.",
)
