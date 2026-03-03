package com.example.chat_poc.ui.views

import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ThumbDown
import androidx.compose.material.icons.filled.ThumbUp
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.semantics.contentDescription
import androidx.compose.ui.semantics.semantics
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import com.example.chat_poc.ui.ChatConstants

/**
 * Feedback widget shown at the end of a chat session.
 * Displays a card with a title, subtitle, and thumbs up/down buttons.
 * Adapts to light and dark mode via [MaterialTheme.colorScheme].
 *
 * @param onThumbsUp Called when the user taps the thumbs-up button.
 * @param onThumbsDown Called when the user taps the thumbs-down button.
 * @param modifier Optional modifier for the outer card.
 */
@Composable
fun FeedbackWidget(
    onThumbsUp: () -> Unit = {},
    onThumbsDown: () -> Unit = {},
    modifier: Modifier = Modifier,
) {
    val dim = ChatConstants.Dimensions
    val primaryColor = MaterialTheme.colorScheme.primary
    val onSurface = MaterialTheme.colorScheme.onSurface

    var selected by remember { mutableStateOf<FeedbackSelection?>(null) }

    Surface(
        shape = RoundedCornerShape(dim.feedbackCardRadius),
        color = MaterialTheme.colorScheme.surfaceVariant,
        tonalElevation = androidx.compose.ui.unit.Dp.Hairline,
        modifier = modifier.fillMaxWidth(),
    ) {
        Column(
            modifier = Modifier
                .fillMaxWidth()
                .padding(
                    horizontal = dim.feedbackCardPaddingHorizontal,
                    vertical = dim.feedbackCardPaddingVertical,
                ),
            horizontalAlignment = Alignment.CenterHorizontally,
        ) {
            Text(
                text = ChatConstants.Strings.FEEDBACK_TITLE,
                style = MaterialTheme.typography.titleMedium.copy(fontWeight = FontWeight.Bold),
                color = onSurface,
                textAlign = TextAlign.Center,
            )
            Spacer(modifier = Modifier.height(dim.feedbackTitleBottomSpacing))
            Text(
                text = ChatConstants.Strings.FEEDBACK_SUBTITLE,
                style = MaterialTheme.typography.bodyMedium,
                color = onSurface,
                textAlign = TextAlign.Center,
            )
            Spacer(modifier = Modifier.height(dim.feedbackSubtitleBottomSpacing))
            Row(
                horizontalArrangement = Arrangement.spacedBy(dim.feedbackButtonSpacing),
                verticalAlignment = Alignment.CenterVertically,
            ) {
                FeedbackButton(
                    icon = Icons.Filled.ThumbUp,
                    contentDescription = ChatConstants.Strings.FEEDBACK_THUMBS_UP_DESCRIPTION,
                    isSelected = selected == FeedbackSelection.UP,
                    primaryColor = primaryColor,
                    size = dim.feedbackButtonSize,
                    iconSize = dim.feedbackIconSize,
                    onClick = {
                        selected = FeedbackSelection.UP
                        onThumbsUp()
                    },
                )
                FeedbackButton(
                    icon = Icons.Filled.ThumbDown,
                    contentDescription = ChatConstants.Strings.FEEDBACK_THUMBS_DOWN_DESCRIPTION,
                    isSelected = selected == FeedbackSelection.DOWN,
                    primaryColor = primaryColor,
                    size = dim.feedbackButtonSize,
                    iconSize = dim.feedbackIconSize,
                    onClick = {
                        selected = FeedbackSelection.DOWN
                        onThumbsDown()
                    },
                )
            }
        }
    }
}

@Composable
private fun FeedbackButton(
    icon: androidx.compose.ui.graphics.vector.ImageVector,
    contentDescription: String,
    isSelected: Boolean,
    primaryColor: androidx.compose.ui.graphics.Color,
    size: androidx.compose.ui.unit.Dp,
    iconSize: androidx.compose.ui.unit.Dp,
    onClick: () -> Unit,
) {
    val bgColor = if (isSelected) primaryColor else androidx.compose.ui.graphics.Color.Transparent
    val iconColor = if (isSelected) MaterialTheme.colorScheme.onPrimary else primaryColor

    Box(
        contentAlignment = Alignment.Center,
        modifier = Modifier
            .size(size)
            .clip(CircleShape)
            .border(width = androidx.compose.ui.unit.Dp(2f), color = primaryColor, shape = CircleShape)
            .clickable(onClick = onClick)
            .semantics { this.contentDescription = contentDescription },
    ) {
        Surface(
            shape = CircleShape,
            color = bgColor,
            modifier = Modifier.size(size),
        ) {
            Box(contentAlignment = Alignment.Center) {
                Icon(
                    imageVector = icon,
                    contentDescription = null,
                    tint = iconColor,
                    modifier = Modifier.size(iconSize),
                )
            }
        }
    }
}

private enum class FeedbackSelection { UP, DOWN }
