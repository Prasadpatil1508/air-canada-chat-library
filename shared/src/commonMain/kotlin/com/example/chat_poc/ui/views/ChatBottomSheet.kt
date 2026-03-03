package com.example.chat_poc.ui.views

import com.example.chat_poc.ChatLibraryCallbacks
import com.example.chat_poc.ChatLibraryConfig
import com.example.chat_poc.config.LibraryConnectConfig
import com.example.chat_poc.connect.model.ChatMessage
import com.example.chat_poc.connect.model.ConnectChatDetails
import com.example.chat_poc.connect.model.MessageDirection
import com.example.chat_poc.connect.session.ConnectChatSession
import com.example.chat_poc.connect.session.createConnectChatSessionOrNull
import com.example.chat_poc.fetchConnectChatDetails
import com.example.chat_poc.storage.ChatSessionStorage
import com.example.chat_poc.ui.ChatBubble
import com.example.chat_poc.ui.ChatConstants
import com.example.chat_poc.ui.ChatUi
import com.example.chat_poc.ui.theme.ChatDisclaimer
import com.example.chat_poc.ui.views.BottomSheetHeader
import com.example.chat_poc.ui.views.ChatBottomSheetInput
import com.example.chat_poc.ui.views.ChatInputState
import com.example.chat_poc.util.ChatLibraryLog
import com.example.chat_poc.util.UrlOpener
import androidx.compose.foundation.clickable
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.ModalBottomSheet
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.material3.SheetValue
import androidx.compose.material3.rememberModalBottomSheetState
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.text.style.TextDecoration
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch

/**
 * Shared bottom sheet content (commonMain).
 * UI aligned with Air Canada–style chat: header with logo, disclaimer, new-chat vs active-chat states.
 * Compatible with Android and iOS (Compose Multiplatform).
 */
@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun ChatBottomSheetContent(
    config: ChatLibraryConfig,
    callbacks: ChatLibraryCallbacks?,
    onDismiss: () -> Unit,
) {
    val scope = rememberCoroutineScope()
    val hasConnectConfig = LibraryConnectConfig.get()?.isValid() == true
    var isConnecting by remember { mutableStateOf(false) }
    var isConnected by remember { mutableStateOf(false) }
    var connectError by remember { mutableStateOf<String?>(null) }
    var chatSession by remember { mutableStateOf<ConnectChatSession?>(null) }
    val chatMessages = remember { mutableStateListOf<ChatMessage>() }
    var sendText by remember { mutableStateOf("") }
    var pendingIdCounter by remember { mutableStateOf(0) }

    fun onMessageReceived(msg: ChatMessage) {
        if (msg.direction == MessageDirection.COMMON && msg.text.isBlank()) return
        if (msg.direction == MessageDirection.OUTGOING) {
            val trimmed = msg.text.trim()
            val idx = chatMessages.indexOfLast { it.isPending && it.text.trim() == trimmed }
            if (idx >= 0) chatMessages.removeAt(idx)
        }
        chatMessages.add(msg)
    }

    // When sheet opens with connect config, start the chat automatically (no welcome screen).
    LaunchedEffect(hasConnectConfig) {
        if (!hasConnectConfig || isConnected || chatSession != null) return@LaunchedEffect
        ChatLibraryLog.d("BottomSheet", "Auto-starting chat on sheet open")
        isConnecting = true
        connectError = null
        val details = fetchConnectChatDetails().getOrElse {
            connectError = it.message
            isConnecting = false
            callbacks?.onDataToHost("error:${it.message}")
            return@LaunchedEffect
        }
        ChatSessionStorage.setParticipantToken(details.participantToken)
        details.contactId?.let { ChatSessionStorage.setContactId(it) }
        callbacks?.onDataToHost("token:${details.participantToken}")
        val session = createConnectChatSessionOrNull()
        if (session == null) {
            connectError = ChatConstants.ConnectErrors.CONFIG_NOT_SET_HINT
            isConnecting = false
            return@LaunchedEffect
        }
        session.onConnectionEstablished = {
            isConnected = true
            isConnecting = false
            callbacks?.onDataToHost("connected")
        }
        session.onConnectionBroken = {
            isConnected = false
            isConnecting = false
            connectError = it?.message
            ChatSessionStorage.setParticipantToken(null)
        }
        session.onMessageReceived = { msg -> onMessageReceived(msg) }
        chatSession = session
        session.connect(details).onFailure {
            connectError = it.message
            isConnecting = false
        }
    }

    fun addPendingAndStartTimeout(text: String) {
        val pendingId = "${ChatConstants.MessageIdPrefixes.PENDING}${pendingIdCounter++}"
        chatMessages.add(
            ChatMessage(
                id = pendingId,
                text = text,
                participantId = null,
                displayName = null,
                timestamp = "",
                direction = MessageDirection.OUTGOING,
                isPending = true,
            )
        )
        scope.launch {
            delay(ChatUi.sendEchoTimeoutMs)
            val idx = chatMessages.indexOfFirst { it.id == pendingId && it.isPending }
            if (idx >= 0) {
                chatMessages.removeAt(idx)
                chatMessages.add(
                    ChatMessage(
                        id = "${ChatConstants.MessageIdPrefixes.FAILED}$pendingId",
                        text = ChatConstants.Strings.FAILED_TO_SEND,
                        participantId = null,
                        displayName = null,
                        timestamp = "",
                        direction = MessageDirection.OUTGOING,
                        sendFailed = true,
                    )
                )
            }
        }
    }

    DisposableEffect(Unit) {
        onDispose {
            scope.launch {
                chatSession?.disconnect()
                ChatSessionStorage.setParticipantToken(null)
            }
        }
    }

    // Dummy messages for testing AI vs real agent avatars (light/dark mode). Remove when real payload supports isRealAgent.
    LaunchedEffect(isConnected, chatSession) {
        if (isConnected && chatSession != null && chatMessages.isEmpty()) {
            chatMessages.addAll(
                listOf(
                    ChatMessage(
                        id = "test-ai",
                        text = "Test message from AI (AI avatar).",
                        participantId = null,
                        displayName = "AI Assistant",
                        timestamp = "00:00",
                        direction = MessageDirection.INCOMING,
                        isRealAgent = false,
                    ),
                    ChatMessage(
                        id = "test-agent",
                        text = "Test message from real agent (AC Agent avatar – switch device theme to see light/dark icon).",
                        participantId = null,
                        displayName = "AC Agent",
                        timestamp = "00:01",
                        direction = MessageDirection.INCOMING,
                        isRealAgent = true,
                    ),
                )
            )
        }
    }

    ChatLibraryLog.d("BottomSheet", "Content composing: title=${config.displayTitle}, hasConnectConfig=$hasConnectConfig")
    val sheetState = rememberModalBottomSheetState(
        skipPartiallyExpanded = true,
        confirmValueChange = { it != SheetValue.Hidden },
    )
    ModalBottomSheet(
        onDismissRequest = {
            ChatLibraryLog.d("BottomSheet", "Dismiss requested")
            ChatSessionStorage.clear()
            onDismiss()
        },
        sheetState = sheetState,
        dragHandle = null,
        containerColor = MaterialTheme.colorScheme.surface,
    ) {
        Column(
            modifier = Modifier
                .fillMaxWidth()
                .fillMaxHeight()
        ) {
            BottomSheetHeader(
                subtitle = config.headerSubtitle(),
                onClose = {
                    ChatSessionStorage.clear()
                    onDismiss()
                },
                onMinimize = {
                    ChatSessionStorage.clear()
                    onDismiss()
                },
            )

            if (hasConnectConfig && (isConnected && chatSession != null || !isConnected)) {
                // Show chat window immediately; connection is auto-started when sheet opens.
                ActiveChatBody(
                    modifier = Modifier.weight(1f).fillMaxWidth(),
                    messages = chatMessages,
                    onQuickReply = { value: String ->
                        if (chatSession == null) return@ActiveChatBody
                        addPendingAndStartTimeout(value)
                        scope.launch {
                            chatSession?.sendMessage(value)?.onFailure {
                                val idx = chatMessages.indexOfLast { m -> m.isPending && m.text == value }
                                if (idx >= 0) {
                                    chatMessages.removeAt(idx)
                                    chatMessages.add(
                                        ChatMessage(
                                            id = ChatConstants.MessageIdPrefixes.FAILED_IMMEDIATE,
                                            text = ChatConstants.Strings.FAILED_TO_SEND,
                                            participantId = null,
                                            displayName = null,
                                            timestamp = "",
                                            direction = MessageDirection.OUTGOING,
                                            sendFailed = true,
                                        )
                                    )
                                }
                            }
                        }
                    },
                    onFlightActionClick = { UrlOpener.openUrl(it) },
                    bottomContent = {
                        BottomSection(
                            modifier = Modifier.fillMaxWidth(),
                        ) {
                            if (connectError != null) {
                                Text(
                                    text = "${ChatConstants.Strings.ERROR_PREFIX}$connectError",
                                    style = MaterialTheme.typography.bodySmall,
                                    color = MaterialTheme.colorScheme.error,
                                    modifier = Modifier
                                        .fillMaxWidth()
                                        .padding(bottom = ChatConstants.Dimensions.newChatErrorTop),
                                )
                            }
                            ChatBottomSheetInput(
                                state = when {
                                    !isConnected -> ChatInputState.Disabled
                                    sendText.isBlank() -> ChatInputState.Default
                                    else -> ChatInputState.Active
                                },
                                value = sendText,
                                onValueChange = { sendText = it },
                                onSend = onSend@{
                                    if (!isConnected) return@onSend
                                    val text: String = sendText.trim()
                                    if (text.isEmpty()) return@onSend
                                    addPendingAndStartTimeout(text)
                                    sendText = ""
                                    scope.launch {
                                        chatSession?.sendMessage(text)?.onFailure {
                                            val idx = chatMessages.indexOfLast { m -> m.isPending && m.text == text }
                                            if (idx >= 0) {
                                                chatMessages.removeAt(idx)
                                                chatMessages.add(
                                                    ChatMessage(
                                                        id = ChatConstants.MessageIdPrefixes.FAILED_IMMEDIATE,
                                                        text = ChatConstants.Strings.FAILED_TO_SEND,
                                                        participantId = null,
                                                        displayName = null,
                                                        timestamp = "",
                                                        direction = MessageDirection.OUTGOING,
                                                        sendFailed = true,
                                                    )
                                                )
                                            }
                                        }
                                    }
                                },
                            )
                        }
                    },
                )
            } else {
                NewChatContent(
                    modifier = Modifier.weight(1f).fillMaxWidth(),
                    isConnecting = false,
                    connectError = connectError,
                    hasStoredToken = false,
                    onResumeChat = { },
                    onStartNewChat = { },
                )
            }
        }
    }
}

@Composable
private fun InfoIcon(modifier: Modifier = Modifier) {
    Box(
        modifier = modifier
            .size(ChatConstants.Dimensions.newChatInfoIconSize)
            .clip(CircleShape)
            .background(MaterialTheme.colorScheme.primary),
        contentAlignment = Alignment.Center,
    ) {
        Text(
            text = "i",
            style = MaterialTheme.typography.labelLarge,
            color = MaterialTheme.colorScheme.onPrimary,
        )
    }
}

@Composable
private fun BottomSection(
    modifier: Modifier = Modifier,
    content: @Composable () -> Unit,
) {
    Column(
        modifier = modifier.fillMaxWidth(),
        verticalArrangement = Arrangement.spacedBy(0.dp),
    ) {
        // Shadow only at top: thin gradient above the panel (no all-around elevation)
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(ChatConstants.Dimensions.bottomSectionTopShadowHeight)
                .background(
                    Brush.verticalGradient(
                        colors = listOf(
                            Color.Transparent,
                            Color.Black.copy(alpha = 0.12f),
                        ),
                    ),
                ),
        )
        Surface(
            modifier = Modifier.fillMaxWidth(),
            shape = RoundedCornerShape(
                topStart = ChatConstants.Dimensions.bottomSectionTopCornerRadius,
                topEnd = ChatConstants.Dimensions.bottomSectionTopCornerRadius,
            ),
            shadowElevation = 0.dp,
            color = MaterialTheme.colorScheme.surface,
        ) {
            Column(
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(ChatConstants.Dimensions.bottomSectionPadding),
                horizontalAlignment = Alignment.CenterHorizontally,
            ) {
                content()
            }
        }
    }
}

@Composable
private fun NewChatContent(
    modifier: Modifier = Modifier,
    isConnecting: Boolean,
    connectError: String?,
    hasStoredToken: Boolean,
    onResumeChat: () -> Unit,
    onStartNewChat: () -> Unit,
) {
    Box(
        modifier = modifier
            .fillMaxHeight()
            .fillMaxWidth()
    ) {
        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(top = ChatConstants.Dimensions.newChatContentPaddingTop)
                .padding(horizontal = ChatConstants.Dimensions.newChatContentPaddingHorizontal)
                .padding(bottom = ChatConstants.Dimensions.newChatContentPaddingBottom)
        ) {
            Surface(
                shape = RoundedCornerShape(ChatConstants.Dimensions.newChatCardRadius),
                color = MaterialTheme.colorScheme.surface,
                modifier = Modifier.fillMaxWidth(),
            ) {
                Row(
                    modifier = Modifier
                        .fillMaxWidth()
                        .padding(ChatConstants.Dimensions.newChatCardPadding),
                    verticalAlignment = Alignment.Top,
                ) {
                    InfoIcon()
                    Spacer(modifier = Modifier.size(ChatConstants.Dimensions.newChatInfoIconSpacer))
                    Column(modifier = Modifier.weight(1f)) {
                        Text(
                            text = ChatConstants.Strings.WELCOME_MESSAGE,
                            style = MaterialTheme.typography.bodyMedium,
                            color = MaterialTheme.colorScheme.onSurface,
                        )
                        Text(
                            text = ChatConstants.Strings.PRIVACY_POLICY_LINK,
                            style = MaterialTheme.typography.bodyMedium,
                            color = MaterialTheme.colorScheme.primary,
                            modifier = Modifier.clickable { UrlOpener.openUrl(ChatConstants.Urls.PRIVACY_POLICY) },
                        )
                        Text(
                            text = ".",
                            style = MaterialTheme.typography.bodyMedium,
                            color = MaterialTheme.colorScheme.onSurface,
                        )
                    }
                }
            }
            Text(
                text = ChatConstants.Strings.CHAT_ENDED,
                style = MaterialTheme.typography.bodySmall,
                textAlign = TextAlign.Center,
                color = ChatDisclaimer,
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(top = ChatConstants.Dimensions.newChatChatEndedTop, bottom = ChatConstants.Dimensions.newChatWelcomePaddingVertical),
            )

            Spacer(modifier = Modifier.weight(1f))
        }

        BottomSection(
            modifier = Modifier
                .fillMaxWidth()
                .align(Alignment.BottomCenter),
        ) {
            Button(
                onClick = onStartNewChat,
                modifier = Modifier
                    .fillMaxWidth()
                    .height(ChatConstants.Dimensions.inputBoxHeight),
                enabled = !isConnecting,
                shape = RoundedCornerShape(ChatConstants.Dimensions.inputBoxCornerRadius),
                colors = ButtonDefaults.buttonColors(containerColor = MaterialTheme.colorScheme.primary),
            ) {
                Text(
                    if (isConnecting) ChatConstants.Strings.CONNECTING else ChatConstants.Strings.START_NEW_CHAT,
                    modifier = Modifier.padding(end = 8.dp),
                )
                Text(ChatConstants.Strings.START_CHAT_ICON)
            }

            connectError?.let { err ->
                Text(
                    text = "${ChatConstants.Strings.ERROR_PREFIX}$err",
                    style = MaterialTheme.typography.bodySmall,
                    color = MaterialTheme.colorScheme.error,
                    modifier = Modifier.padding(top = ChatConstants.Dimensions.newChatErrorTop),
                )
            }

            Text(
                text = ChatConstants.Strings.DISCLAIMER,
                style = MaterialTheme.typography.labelSmall,
                color = ChatDisclaimer,
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(top = ChatConstants.Dimensions.newChatDisclaimerTop),
                textAlign = TextAlign.Center,
            )
        }
    }
}
