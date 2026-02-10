package com.example.chat_poc.ui.views

import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.AssistChip
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.example.chat_poc.connect.model.ChatMessage
import com.example.chat_poc.ui.ChatConstants
import com.example.chat_poc.ui.ChatUi
import com.example.chat_poc.markdown.MarkdownRenderer

/**
 * Renders a chat message (plain text, Markdown, quick replies, or flight status). Markdown is rendered inside the SDK via
 * [MarkdownRenderer]. When [msg.quickReplies] is non-null, shows a title and clickable options; [onQuickReplyClick]
 * is invoked with the option's value when the user taps an option (caller should send that value to the server).
 * When [msg.flightStatusPayload] is non-null, shows a custom flight-status card; [onFlightActionClick] is invoked
 * with the action href when the user taps an action (e.g. host can open the URL).
 */
@Composable
fun ChatMessageContent(
    msg: ChatMessage,
    modifier: Modifier = Modifier,
    onQuickReplyClick: ((value: String) -> Unit)? = null,
    onFlightActionClick: ((href: String) -> Unit)? = null,
    /** When true, quick replies use outlined pill style. Title/label come from message (socket response). */
    suggestedRepliesStyle: Boolean = false,
    /** When true, content only takes the width it needs (e.g. for outgoing bubble). When false, content fills width. */
    fillMaxWidth: Boolean = true,
) {
    val widthModifier = if (fillMaxWidth) modifier.fillMaxWidth() else modifier
    when {
        msg.sendFailed -> {
            Text(
                text = msg.text,
                style = MaterialTheme.typography.bodyMedium,
                color = MaterialTheme.colorScheme.error,
                modifier = widthModifier,
            )
        }
        msg.flightStatusPayload != null -> {
            FlightStatusContent(
                payload = msg.flightStatusPayload,
                modifier = modifier,
                onActionClick = onFlightActionClick,
            )
        }
        msg.quickReplies != null && msg.quickReplies.isNotEmpty() -> {
            Column(modifier = widthModifier) {
                if (suggestedRepliesStyle) {
                    Text(
                        text = msg.text.ifBlank { ChatConstants.Strings.QUICK_REPLIES_DEFAULT_TITLE },
                        style = MaterialTheme.typography.titleMedium,
                        color = MaterialTheme.colorScheme.onSurface,
                        modifier = Modifier.padding(bottom = ChatUi.quickReplyTitleSpacing),
                    )
                    Column(
                        verticalArrangement = Arrangement.spacedBy(ChatUi.quickReplyChipSpacing),
                    ) {
                        for (option in msg.quickReplies) {
                            val label = option.label.ifBlank { option.value }
                            OutlinedButton(
                                onClick = { onQuickReplyClick?.invoke(option.value) },
                                shape = RoundedCornerShape(50),
                                modifier = Modifier.padding(0.dp),
                                colors = ButtonDefaults.outlinedButtonColors(
                                    contentColor = MaterialTheme.colorScheme.primary,
                                    containerColor = Color.White,
                                ),
                                border = BorderStroke(1.dp, MaterialTheme.colorScheme.primary),
                            ) {
                                Text(label)
                            }
                        }
                    }
                } else {
                    if (msg.text.isNotBlank()) {
                        Text(
                            text = msg.text,
                            style = MaterialTheme.typography.bodyMedium,
                            modifier = Modifier.padding(bottom = ChatUi.quickReplyTitleSpacing),
                        )
                    }
                    FlowRow(
                        modifier = Modifier.fillMaxWidth(),
                        horizontalArrangement = Arrangement.spacedBy(ChatUi.quickReplyChipSpacing),
                        verticalArrangement = Arrangement.spacedBy(ChatUi.quickReplyChipSpacing),
                    ) {
                        for (option in msg.quickReplies) {
                            val label = option.label.ifBlank { option.value }
                            AssistChip(
                                onClick = { onQuickReplyClick?.invoke(option.value) },
                                label = { Text(label) },
                            )
                        }
                    }
                }
            }
        }
        msg.isMarkdown && msg.text.trim().isNotEmpty() -> {
            Box(modifier = widthModifier) {
                MarkdownRenderer.Render(markdown = msg.text)
            }
        }
        else -> {
            Text(
                text = msg.text,
                style = MaterialTheme.typography.bodyMedium,
                modifier = widthModifier,
            )
        }
    }
}
