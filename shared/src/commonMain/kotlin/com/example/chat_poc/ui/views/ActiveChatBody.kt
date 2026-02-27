package com.example.chat_poc.ui.views

import com.example.chat_poc.connect.model.ChatMessage
import com.example.chat_poc.connect.model.MessageDirection
import com.example.chat_poc.ui.ChatBubble
import com.example.chat_poc.ui.ChatConstants
import com.example.chat_poc.ui.ChatUi
import com.example.chat_poc.ui.rememberAiAvatarPainter
import com.example.chat_poc.util.formatMessageTime
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.BoxWithConstraints
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.widthIn
import androidx.compose.foundation.layout.wrapContentWidth
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.itemsIndexed
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp

/**
 * Active chat body: scrollable message list and a bottom content slot (e.g. input + disclaimer).
 *
 * Single responsibility: layout and display of active chat messages with a pluggable bottom
 * section. Follows Material 3 and uses [ChatConstants]/[ChatUi] for dimensions.
 *
 * @param messages List of chat messages (treated as immutable for recomposition stability).
 * @param onQuickReply Callback when a quick reply is selected.
 * @param onFlightActionClick Callback when a flight action is clicked.
 * @param bottomContent Composable slot for bottom section (e.g. [BottomSection] with [ChatBottomSheetInput]).
 */
@Composable
fun ActiveChatBody(
    messages: List<ChatMessage>,
    onQuickReply: (String) -> Unit,
    onFlightActionClick: (String) -> Unit,
    bottomContent: @Composable () -> Unit,
    modifier: Modifier = Modifier,
) {
    val listState = rememberLazyListState()

    LaunchedEffect(messages.size) {
        if (messages.isNotEmpty()) {
            listState.animateScrollToItem(messages.size - 1)
        }
    }

    Column(
        modifier = modifier
            .fillMaxWidth()
            .fillMaxHeight(),
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
            itemsIndexed(
                items = messages,
                key = { index, msg -> "msg-$index-${msg.id}" },
            ) { index, msg ->
                ActiveChatMessageItem(
                    msg = msg,
                    index = index,
                    messages = messages,
                    onQuickReply = onQuickReply,
                    onFlightActionClick = onFlightActionClick,
                )
            }
        }

        // Get-started floated buttons: only when first time (no user message sent yet)
        if (messages.none { it.direction == MessageDirection.OUTGOING }) {
            GetStartedFloatedButtons(
                options = ChatConstants.Strings.GET_STARTED_OPTIONS,
                onOptionClick = onQuickReply,
            )
        }

        bottomContent()
    }
}

/** Resolves display name for incoming messages; uses default when null, blank, or a system identifier (e.g. SYSTEM_MESSAGE). */
private fun resolveIncomingAgentName(displayName: String?): String {
    val name = displayName?.takeIf { it.isNotBlank() } ?: return ChatConstants.Strings.INCOMING_AGENT_NAME_DEFAULT
    return if (ChatConstants.Strings.INCOMING_AGENT_NAME_SYSTEM_VALUES.contains(name)) ChatConstants.Strings.INCOMING_AGENT_NAME_DEFAULT else name
}

/**
 * Single message row or quick-reply block. Extracted for recomposition scope and reuse.
 */
@Composable
private fun ActiveChatMessageItem(
    msg: ChatMessage,
    index: Int,
    messages: List<ChatMessage>,
    onQuickReply: (String) -> Unit,
    onFlightActionClick: (String) -> Unit,
) {
    val onQuickReplyCb: (String) -> Unit = { value -> onQuickReply(value); Unit }
    val hasQuickReplies = !msg.quickReplies.isNullOrEmpty()
    val showAvatar = index == 0 || messages.getOrNull(index - 1)?.direction != msg.direction
    val timeText = formatMessageTime(msg.timestamp).ifEmpty { "—" }
    val avatarSize = ChatConstants.Dimensions.avatarSize
    val avatarSpacer = ChatConstants.Dimensions.avatarSpacer

    if (hasQuickReplies) {
        Column(
            modifier = Modifier
                .fillMaxWidth()
                .padding(ChatUi.quickReplyBlockPadding),
            horizontalAlignment = Alignment.End,
        ) {
            if (showAvatar && (msg.direction == MessageDirection.INCOMING || msg.direction == MessageDirection.COMMON)) {
                val agentName = resolveIncomingAgentName(msg.displayName)
                Text(
                    text = "$agentName $timeText",
                    style = MaterialTheme.typography.labelSmall,
                    color = MaterialTheme.colorScheme.onSurfaceVariant,
                    modifier = Modifier
                        .padding(bottom = ChatUi.messageTimestampSpacing)
                        .align(Alignment.End),
                )
            }
            if (msg.direction == MessageDirection.OUTGOING && !msg.isPending) {
                Text(
                    text = "$timeText ${ChatConstants.Strings.OUTGOING_SENDER_LABEL}",
                    style = MaterialTheme.typography.labelSmall,
                    color = MaterialTheme.colorScheme.onSurfaceVariant,
                    modifier = Modifier
                        .padding(bottom = ChatUi.messageTimestampSpacing)
                        .align(Alignment.End),
                )
            }
            ChatMessageContent(
                msg = msg,
                modifier = Modifier.wrapContentWidth(Alignment.End),
                onQuickReplyClick = onQuickReplyCb,
                onFlightActionClick = onFlightActionClick,
                suggestedRepliesStyle = true,
            )
        }
    } else {
        Column(modifier = Modifier.fillMaxWidth()) {
            // Outgoing (Figma): time + "You" at top right above bubble; only when message is confirmed (not pending)
            if (msg.direction == MessageDirection.OUTGOING && !msg.isPending) {
                Row(
                    modifier = Modifier
                        .fillMaxWidth()
                        .padding(bottom = ChatUi.messageTimestampSpacing),
                    horizontalArrangement = Arrangement.End,
                ) {
                    Text(
                        text = "$timeText ${ChatConstants.Strings.OUTGOING_SENDER_LABEL}",
                        style = MaterialTheme.typography.labelSmall,
                        color = MaterialTheme.colorScheme.onSurfaceVariant,
                    )
                }
            }
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
                            Spacer(modifier = Modifier.size(avatarSize + avatarSpacer))
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
                                .padding(horizontal = ChatUi.bubblePaddingHorizontal),
                            verticalArrangement = Arrangement.spacedBy(0.dp),
                        ) {
                            if (showAvatar) {
                                val agentName = resolveIncomingAgentName(msg.displayName)
                                Text(
                                    text = "$agentName $timeText",
                                    style = MaterialTheme.typography.labelSmall,
                                    color = MaterialTheme.colorScheme.onSurfaceVariant,
                                    modifier = Modifier.padding(bottom = ChatUi.messageTimestampSpacing),
                                )
                            }
                            ChatMessageContent(
                                msg = msg,
                                modifier = Modifier
                                    .fillMaxWidth()
                                    .padding(bottom = ChatUi.bubblePaddingVertical),
                                onQuickReplyClick = onQuickReplyCb,
                                onFlightActionClick = onFlightActionClick,
                            )
                        }
                    }
                    // Outgoing: no user avatar (Figma uses "time + You" at top instead)
                    if (msg.direction == MessageDirection.OUTGOING) {
                        // No avatar; keep layout balanced with minimal spacer if needed
                    }
                }
            }
            // No bottom timestamp: incoming/common show time only at top with agent name; outgoing uses top-right "time You"
        }
    }
}
