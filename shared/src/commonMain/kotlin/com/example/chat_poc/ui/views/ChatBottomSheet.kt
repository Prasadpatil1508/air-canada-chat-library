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
import com.example.chat_poc.ui.theme.BottomSectionBackground
import com.example.chat_poc.ui.theme.ChatDisclaimer
import com.example.chat_poc.util.ChatLibraryLog
import com.example.chat_poc.util.formatMessageTime
import com.example.chat_poc.util.UrlOpener
import androidx.compose.foundation.clickable
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.BoxWithConstraints
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.widthIn
import androidx.compose.foundation.layout.wrapContentWidth
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.itemsIndexed
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowUpward
import androidx.compose.material.icons.filled.Close
import androidx.compose.material.icons.filled.Remove
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.ModalBottomSheet
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.OutlinedTextFieldDefaults
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
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import com.example.chat_poc.ui.theme.HeaderGradientEnd
import com.example.chat_poc.ui.theme.HeaderGradientStart
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
import com.example.chat_poc.ui.rememberAiAvatarPainter
import com.example.chat_poc.ui.rememberCustomerAvatarPainter
import com.example.chat_poc.ui.rememberHeaderLogoPainter

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
        containerColor = Color.White,
    ) {
        Column(
            modifier = Modifier
                .fillMaxWidth()
                .fillMaxHeight()
        ) {
            ChatSheetHeader(
                onMinimize = {
                    ChatSessionStorage.clear()
                    onDismiss()
                },
                onClose = {
                    ChatSessionStorage.clear()
                    onDismiss()
                },
            )

            if (hasConnectConfig && !isConnected) {
                NewChatContent(
                    modifier = Modifier.weight(1f).fillMaxWidth(),
                    isConnecting = isConnecting,
                    connectError = connectError,
                    hasStoredToken = ChatSessionStorage.getParticipantToken()?.isNotBlank() == true,
                    onResumeChat = {
                        if (isConnecting) return@NewChatContent
                        isConnecting = true
                        connectError = null
                        scope.launch {
                            val session = createConnectChatSessionOrNull()
                            val token = ChatSessionStorage.getParticipantToken()
                            val contactId = ChatSessionStorage.getContactId()
                            if (session == null || token == null) {
                                connectError = ChatConstants.ConnectErrors.CONFIG_NOT_SET
                                isConnecting = false
                                return@launch
                            }
                            val details = ConnectChatDetails(participantToken = token, contactId = contactId)
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
                    },
                    onStartNewChat = {
                        if (isConnecting) return@NewChatContent
                        ChatLibraryLog.d("BottomSheet", "Start new chat tapped")
                        isConnecting = true
                        connectError = null
                        scope.launch {
                            val details = fetchConnectChatDetails().getOrElse {
                                connectError = it.message
                                isConnecting = false
                                callbacks?.onDataToHost("error:${it.message}")
                                return@launch
                            }
                            ChatSessionStorage.setParticipantToken(details.participantToken)
                            details.contactId?.let { ChatSessionStorage.setContactId(it) }
                            callbacks?.onDataToHost("token:${details.participantToken}")
                            val session = createConnectChatSessionOrNull()
                            if (session == null) {
                                connectError = ChatConstants.ConnectErrors.CONFIG_NOT_SET_HINT
                                isConnecting = false
                                return@launch
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
                    },
                )
            } else if (isConnected && chatSession != null) {
                ActiveChatContent(
                    chatMessages = chatMessages,
                    sendText = sendText,
                    onSendTextChange = { sendText = it },
                    onQuickReply = { value: String ->
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
                    onSendMessage = {
                        val text: String = sendText.trim()
                        if (text.isEmpty()) return@ActiveChatContent
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
                    onFlightActionClick = { UrlOpener.openUrl(it) },
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
private fun ChatSheetHeader(
    onMinimize: () -> Unit,
    onClose: () -> Unit,
) {
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .background(
                brush = Brush.linearGradient(
                    colors = listOf(
                        HeaderGradientStart,
                        HeaderGradientEnd,
                    ),
                    start = Offset(0f, 0f),
                    end = Offset(1000f, 1000f),
                ),
            )
    ) {
        Column(
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = ChatConstants.Dimensions.headerPaddingHorizontal)
                .padding(top = 0.dp, bottom = ChatConstants.Dimensions.headerPaddingVertical)
        ) {
            Box(modifier = Modifier.fillMaxWidth()) {
                Row(
                    modifier = Modifier.fillMaxWidth(),
                    verticalAlignment = Alignment.CenterVertically,
                    horizontalArrangement = Arrangement.Center,
                ) {
                    Image(
                        painter = rememberHeaderLogoPainter(),
                        contentDescription = null,
                        modifier = Modifier
                            .size(ChatConstants.Dimensions.headerLogoSize)
                            .clip(CircleShape),
                        contentScale = ContentScale.Fit,
                    )
                }
                Row(
                    modifier = Modifier.align(Alignment.CenterEnd),
                    verticalAlignment = Alignment.CenterVertically,
                ) {
                    IconButton(onClick = onMinimize) {
                        Icon(
                            imageVector = Icons.Filled.Remove,
                            contentDescription = "Minimize",
                            tint = MaterialTheme.colorScheme.onSurface,
                        )
                    }
                    IconButton(onClick = onClose) {
                        Icon(
                            imageVector = Icons.Filled.Close,
                            contentDescription = "Close",
                            tint = MaterialTheme.colorScheme.onSurface,
                        )
                    }
                }
            }
            Spacer(modifier = Modifier.size(ChatConstants.Dimensions.headerLogoSpacer))
            Column(
                modifier = Modifier.fillMaxWidth(),
                horizontalAlignment = Alignment.CenterHorizontally,
                
            ) {
                Row(
                    verticalAlignment = Alignment.CenterVertically,
                    horizontalArrangement = Arrangement.Center,
                ) {
                    Text(
                        text = ChatConstants.Strings.HEADER_TITLE,
                        style = MaterialTheme.typography.titleLarge,
                        color = MaterialTheme.colorScheme.onSurface,
                        textAlign = TextAlign.Center,
                    )
                    Spacer(modifier = Modifier.size(8.dp))
                    Box(
                        modifier = Modifier
                            .background(
                                MaterialTheme.colorScheme.surfaceVariant,
                                RoundedCornerShape(ChatConstants.Dimensions.headerBetaPillRadius)
                            )
                            .padding(
                                horizontal = ChatConstants.Dimensions.headerBetaPillPaddingH,
                                vertical = ChatConstants.Dimensions.headerBetaPillPaddingV
                            ),
                    ) {
                        Text(
                            text = ChatConstants.Strings.BETA,
                            style = MaterialTheme.typography.labelMedium,
                            color = MaterialTheme.colorScheme.onSurfaceVariant,
                        )
                    }
                }
                Spacer(modifier = Modifier.size(ChatConstants.Dimensions.headerDisclaimerTop))
                Text(
                    text = ChatConstants.Strings.DISCLAIMER,
                    style = MaterialTheme.typography.labelSmall,
                    color = ChatDisclaimer,
                    modifier = Modifier.fillMaxWidth(),
                    textAlign = TextAlign.Center,
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
            color = BottomSectionBackground,
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

@Composable
private fun ActiveChatContent(
    chatMessages: List<ChatMessage>,
    sendText: String,
    onSendTextChange: (String) -> Unit,
    onQuickReply: (String) -> Unit,
    onSendMessage: () -> Unit,
    onFlightActionClick: (String) -> Unit,
) {
    val listState = rememberLazyListState()
    LaunchedEffect(chatMessages.size) {
        if (chatMessages.isNotEmpty()) {
            listState.animateScrollToItem(chatMessages.size - 1)
        }
    }

    Column(
        modifier = Modifier
            .fillMaxWidth()
            .fillMaxHeight()
    ) {
        LazyColumn(
            state = listState,
            modifier = Modifier
                .weight(1f)
                .fillMaxWidth()
                .padding(horizontal = ChatConstants.Dimensions.messageListPaddingHorizontal),
            contentPadding = PaddingValues(top = 8.dp, bottom = 8.dp),
            verticalArrangement = Arrangement.spacedBy(ChatUi.messageSpacing),
        ) {
            itemsIndexed(chatMessages) { index: Int, msg: ChatMessage ->
                val onQuickReplyCb: (String) -> Unit = { value -> onQuickReply(value); Unit }
                val hasQuickReplies = msg.quickReplies != null && msg.quickReplies.isNotEmpty()
                val showAvatar = index == 0 || chatMessages.getOrNull(index - 1)?.direction != msg.direction
                val showTime = index == chatMessages.lastIndex || chatMessages.getOrNull(index + 1)?.direction != msg.direction
                val timeText = formatMessageTime(msg.timestamp).ifEmpty { "—" }
                val avatarSize = ChatConstants.Dimensions.avatarSize
                val avatarSpacer = ChatConstants.Dimensions.avatarSpacer
                val outgoingAvatarSize = ChatConstants.Dimensions.outgoingAvatarSize
                if (hasQuickReplies) {
                    Column(
                        modifier = Modifier
                            .fillMaxWidth()
                            .padding(ChatUi.quickReplyBlockPadding),
                        horizontalAlignment = Alignment.End,
                    ) {
                        ChatMessageContent(
                            msg = msg,
                            modifier = Modifier.wrapContentWidth(Alignment.End),
                            onQuickReplyClick = onQuickReplyCb,
                            onFlightActionClick = onFlightActionClick,
                            suggestedRepliesStyle = true,
                        )
                        if (showTime) {
                            Text(
                                text = timeText,
                                style = MaterialTheme.typography.labelSmall,
                                color = MaterialTheme.colorScheme.onSurfaceVariant,
                                modifier = Modifier.padding(top = ChatUi.messageTimestampSpacing),
                            )
                        }
                    }
                } else {
                    Column(modifier = Modifier.fillMaxWidth()) {
                        BoxWithConstraints(modifier = Modifier.fillMaxWidth()) {
                            val maxBubbleWidth = maxWidth * ChatUi.bubbleMaxWidthFraction
                            Row(
                                modifier = Modifier.fillMaxWidth(),
                                verticalAlignment = Alignment.Top,
                                horizontalArrangement = Arrangement.Start,
                            ) {
                                if (msg.direction == MessageDirection.OUTGOING) {
                                    Spacer(modifier = Modifier.weight(1f))
                                }
                                if (msg.direction == MessageDirection.INCOMING || msg.direction == MessageDirection.COMMON) {
                                    if (showAvatar) {
                                        Image(
                                            painter = rememberAiAvatarPainter(),
                                            contentDescription = null,
                                            modifier = Modifier
                                                .size(avatarSize)
                                                .padding(end = avatarSpacer),
                                        )
                                    } else {
                                        Spacer(
                                            modifier = Modifier
                                                .size(avatarSize)
                                        )
                                    }
                                }
                                if (msg.direction == MessageDirection.OUTGOING) {
                                    ChatBubble(
                                        direction = msg.direction,
                                        modifier = Modifier
                                            .widthIn(max = maxBubbleWidth)
                                            .wrapContentWidth(Alignment.End),
                                        label = null,
                                    ) {
                                        ChatMessageContent(
                                            msg = msg,
                                            modifier = Modifier,
                                            onQuickReplyClick = onQuickReplyCb,
                                            onFlightActionClick = onFlightActionClick,
                                            fillMaxWidth = false,
                                        )
                                    }
                                } else {
                                    Column(
                                        modifier = Modifier
                                            .fillMaxWidth(ChatUi.bubbleMaxWidthFraction)
                                            .padding(
                                                horizontal = ChatUi.bubblePaddingHorizontal,
                                                vertical = ChatUi.bubblePaddingVertical,
                                            ),
                                    ) {
                                        ChatMessageContent(
                                            msg = msg,
                                            modifier = Modifier.fillMaxWidth(),
                                            onQuickReplyClick = onQuickReplyCb,
                                            onFlightActionClick = onFlightActionClick,
                                        )
                                    }
                                }
                            if (msg.direction == MessageDirection.OUTGOING) {
                                if (showAvatar) {
                                    Image(
                                        painter = rememberCustomerAvatarPainter(),
                                        contentDescription = null,
                                        modifier = Modifier
                                            .size(outgoingAvatarSize)
                                            .padding(start = avatarSpacer),
                                    )
                                } else {
                                    Spacer(
                                        modifier = Modifier
                                            .size(avatarSize)
                                            .padding(start = avatarSpacer),
                                    )
                                }
                            }
                        }
                        }
                        if (showTime) {
                            Row(
                                modifier = Modifier.fillMaxWidth(),
                                horizontalArrangement = if (msg.direction == MessageDirection.OUTGOING) Arrangement.End else Arrangement.Start,
                            ) {
                                Text(
                                    text = timeText,
                                    style = MaterialTheme.typography.labelSmall,
                                    color = MaterialTheme.colorScheme.onSurfaceVariant,
                                    modifier = Modifier.padding(top = ChatUi.messageTimestampSpacing),
                                )
                            }
                        }
                    }
                }
            }
        }

        BottomSection {
            OutlinedTextField(
                value = sendText,
                onValueChange = onSendTextChange,
                modifier = Modifier
                    .fillMaxWidth()
                    .height(ChatConstants.Dimensions.inputBoxHeight),
                placeholder = { Text(ChatConstants.Strings.MESSAGE_PLACEHOLDER) },
                singleLine = true,
                shape = RoundedCornerShape(ChatConstants.Dimensions.inputBoxCornerRadius),
                colors = OutlinedTextFieldDefaults.colors(
                    focusedBorderColor = Color.Transparent,
                    unfocusedBorderColor = Color.Transparent,
                    disabledBorderColor = Color.Transparent,
                    focusedContainerColor = Color.White,
                    unfocusedContainerColor = Color.White,
                    disabledContainerColor = Color.White,
                ),
                trailingIcon = {
                    Box(
                        modifier = Modifier
                            .size(ChatConstants.Dimensions.sendButtonSize)
                            .clip(CircleShape)
                            .background(MaterialTheme.colorScheme.primary),
                        contentAlignment = Alignment.Center,
                    ) {
                        IconButton(
                            onClick = onSendMessage,
                            modifier = Modifier.size(ChatConstants.Dimensions.sendButtonSize),
                        ) {
                            Icon(
                                imageVector = Icons.Filled.ArrowUpward,
                                contentDescription = null,
                                tint = MaterialTheme.colorScheme.onPrimary,
                            )
                        }
                    }
                },
            )
            Text(
                text = ChatConstants.Strings.DISCLAIMER,
                style = MaterialTheme.typography.labelSmall,
                color = ChatDisclaimer,
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(top = ChatConstants.Dimensions.inputDisclaimerTop),
                textAlign = TextAlign.Center,
            )
        }
    }
}
