package com.example.chat_poc.ui.views

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.foundation.text.KeyboardActions
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Send
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.IconButtonDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.SolidColor
import androidx.compose.ui.platform.LocalFocusManager
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import com.example.chat_poc.ui.ChatConstants
import com.example.chat_poc.ui.theme.ChatDisclaimer
import com.example.chat_poc.ui.theme.InputBackgroundDark
import com.example.chat_poc.ui.theme.InputBackgroundDisabledDark
import com.example.chat_poc.ui.theme.InputBackgroundDisabledLight
import com.example.chat_poc.ui.theme.InputBackgroundLight
import com.example.chat_poc.ui.theme.InputBorderDark
import com.example.chat_poc.ui.theme.InputBorderLight
import com.example.chat_poc.ui.theme.InputPlaceholderDark
import com.example.chat_poc.ui.theme.InputPlaceholderDisabledDark
import com.example.chat_poc.ui.theme.InputPlaceholderDisabledLight
import com.example.chat_poc.ui.theme.InputPlaceholderLight
import com.example.chat_poc.ui.theme.SendButtonActive
import com.example.chat_poc.ui.theme.SendButtonInactiveDark
import com.example.chat_poc.ui.theme.SendButtonInactiveLight

/**
 * State of the bottom section chat input (Material 3).
 * - [Disabled]: Input with border, no send button (e.g. chat not connected).
 * - [Default]: Input with inactive (grey) send button; no text entered.
 * - [Active]: Input with active (blue) send button; text entered, can send.
 */
enum class ChatInputState {
    Disabled,
    Default,
    Active,
}

/**
 * Bottom section chat input widget: pill-shaped field, optional send button, disclaimer.
 * Supports light/dark theme and three states per design.
 * Use inside the bottom section container (e.g. [BottomSection]).
 *
 * @param state [ChatInputState] – Disabled (no send), Default (grey send), Active (blue send).
 * @param value Current text in the input.
 * @param onValueChange Called when text changes.
 * @param onSend Called when send is tapped (only in Active state).
 */
@Composable
fun ChatBottomSheetInput(
    state: ChatInputState,
    value: String,
    onValueChange: (String) -> Unit,
    onSend: () -> Unit,
    modifier: Modifier = Modifier,
) {
    val colorScheme = MaterialTheme.colorScheme
    val surface = colorScheme.surface
    val isDark = (surface.red * 0.299f + surface.green * 0.587f + surface.blue * 0.114f) < 0.5f

    val inputBackground = when (state) {
        ChatInputState.Disabled -> if (isDark) InputBackgroundDisabledDark else InputBackgroundDisabledLight
        ChatInputState.Default, ChatInputState.Active -> if (isDark) InputBackgroundDark else InputBackgroundLight
    }
    val inputBorderColor = when (state) {
        ChatInputState.Disabled -> if (isDark) InputBorderDark else InputBorderLight
        ChatInputState.Default, ChatInputState.Active -> Color.Transparent
    }
    val placeholderColor = when (state) {
        ChatInputState.Disabled -> if (isDark) InputPlaceholderDisabledDark else InputPlaceholderDisabledLight
        ChatInputState.Default, ChatInputState.Active -> if (isDark) InputPlaceholderDark else InputPlaceholderLight
    }
    val sendButtonBackground = when (state) {
        ChatInputState.Disabled -> null
        ChatInputState.Default -> if (isDark) SendButtonInactiveDark else SendButtonInactiveLight
        ChatInputState.Active -> SendButtonActive
    }
    val sendEnabled = state == ChatInputState.Active
    val focusManager = LocalFocusManager.current
    val dim = ChatConstants.Dimensions
    val inputShape = RoundedCornerShape(dim.inputBoxCornerRadius)

    Column(modifier = modifier.fillMaxWidth()) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(dim.inputBoxHeight)
                .then(
                    if (state == ChatInputState.Disabled) {
                        Modifier
                            .clip(inputShape)
                            .border(1.dp, inputBorderColor, inputShape)
                            .padding(1.dp)
                            .clip(RoundedCornerShape(dim.inputBoxCornerRadius - 1.dp))
                            .background(inputBackground)
                    } else {
                        Modifier
                            .clip(inputShape)
                            .background(inputBackground)
                    }
                ),
        ) {
            Row(
                modifier = Modifier
                    .fillMaxWidth()
                    .height(dim.inputBoxHeight)
                    .padding(dim.inputFieldPadding),
                verticalAlignment = Alignment.CenterVertically,
            ) {
                BasicTextField(
                    value = value,
                    onValueChange = onValueChange,
                    enabled = state != ChatInputState.Disabled,
                    readOnly = state == ChatInputState.Disabled,
                    singleLine = true,
                    textStyle = MaterialTheme.typography.bodyLarge.copy(color = colorScheme.onSurface),
                    cursorBrush = SolidColor(colorScheme.primary),
                    keyboardOptions = KeyboardOptions(imeAction = ImeAction.Send),
                    keyboardActions = KeyboardActions(onSend = { if (sendEnabled) onSend() else focusManager.clearFocus() }),
                    modifier = Modifier.weight(1f),
                    decorationBox = { inner ->
                        Box(
                            modifier = Modifier.fillMaxWidth(),
                            contentAlignment = Alignment.CenterStart,
                        ) {
                            if (value.isEmpty()) {
                                Text(
                                    text = ChatConstants.Strings.INPUT_PLACEHOLDER,
                                    style = MaterialTheme.typography.bodyLarge,
                                    color = placeholderColor,
                                )
                            }
                            inner()
                        }
                    },
                )
                if (state != ChatInputState.Disabled && sendButtonBackground != null) {
                    Spacer(modifier = Modifier.width(8.dp))
                    IconButton(
                        onClick = onSend,
                        enabled = sendEnabled,
                        modifier = Modifier.size(dim.sendButtonSize),
                        colors = IconButtonDefaults.iconButtonColors(
                            contentColor = Color.White,
                            disabledContentColor = Color.White,
                        ),
                    ) {
                        Box(
                            modifier = Modifier
                                .size(dim.sendButtonSize)
                                .clip(CircleShape)
                                .background(sendButtonBackground),
                            contentAlignment = Alignment.Center,
                        ) {
                            Icon(
                                imageVector = Icons.Filled.Send,
                                contentDescription = "Send",
                                tint = Color.White,
                                modifier = Modifier.size(dim.sendIconSize),
                            )
                        }
                    }
                }
            }
        }
        Text(
            text = ChatConstants.Strings.INPUT_DISCLAIMER,
            style = MaterialTheme.typography.labelSmall,
            color = ChatDisclaimer,
            textAlign = TextAlign.Center,
            modifier = Modifier
                .fillMaxWidth()
                .padding(top = dim.inputDisclaimerTop),
        )
    }
}
