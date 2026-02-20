package com.example.chat_poc.ui.views

import com.example.chat_poc.ui.ChatConstants
import com.example.chat_poc.ui.theme.GetStartedButtonBgDark
import com.example.chat_poc.ui.theme.GetStartedButtonBgLight
import com.example.chat_poc.ui.theme.GetStartedButtonTextDark
import com.example.chat_poc.ui.theme.GetStartedButtonTextLight
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp

/**
 * Get-started floated buttons: a prompt and a grid of pill-shaped option buttons.
 * Shown when the bottom sheet is opened for the first time (e.g. when message list is empty).
 *
 * Layout: prompt text, then two rows of two buttons, then one centered button.
 * Light mode: white buttons, black text. Dark mode: dark grey buttons, white text.
 *
 * @param options Button labels in order: row1 left, row1 right, row2 left, row2 right, row3 center.
 *                 Defaults to [ChatConstants.Strings.GET_STARTED_OPTIONS]; later can be from backend.
 * @param onOptionClick Called with the selected option label.
 */
@Composable
fun GetStartedFloatedButtons(
    options: List<String>,
    onOptionClick: (String) -> Unit,
    modifier: Modifier = Modifier,
) {
    val dim = ChatConstants.Dimensions
    val surface = MaterialTheme.colorScheme.surface
    val isDark = (surface.red * 0.299f + surface.green * 0.587f + surface.blue * 0.114f) < 0.5f
    val buttonBg = if (isDark) GetStartedButtonBgDark else GetStartedButtonBgLight
    val buttonTextColor = if (isDark) GetStartedButtonTextDark else GetStartedButtonTextLight
    val promptColor = MaterialTheme.colorScheme.onSurface

    val safeOptions = options.take(5)
    if (safeOptions.isEmpty()) return

    Box(
        modifier = modifier
            .fillMaxWidth()
            .padding(
                start = dim.getStartedBlockPaddingHorizontal,
                top = dim.getStartedSectionPaddingTop,
                end = dim.getStartedBlockPaddingHorizontal,
                bottom = dim.getStartedSectionPaddingBottom,
            ),
        contentAlignment = Alignment.Center,
    ) {
        Column(
            modifier = Modifier.width(dim.getStartedBlockWidth),
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.spacedBy(dim.getStartedVerticalSpacing, Alignment.Top),
        ) {
            Text(
                text = ChatConstants.Strings.GET_STARTED_PROMPT,
                style = MaterialTheme.typography.titleMedium.copy(
                    fontWeight = FontWeight.SemiBold,
                ),
                color = promptColor,
                textAlign = TextAlign.Center,
                modifier = Modifier.fillMaxWidth(),
            )

            // Row 1: options[0], options[1] – fixed-size buttons centered
            if (safeOptions.size >= 2) {
                Row(
                    modifier = Modifier.fillMaxWidth(),
                    horizontalArrangement = Arrangement.Center,
                    verticalAlignment = Alignment.CenterVertically,
                ) {
                    GetStartedButton(
                        text = safeOptions[0],
                        backgroundColor = buttonBg,
                        textColor = buttonTextColor,
                        modifier = Modifier
                            .width(dim.getStartedButtonWidth)
                            .height(dim.getStartedButtonHeight),
                        onClick = { onOptionClick(safeOptions[0]) },
                    )
                    Spacer(modifier = Modifier.width(dim.getStartedButtonSpacingHorizontal))
                    GetStartedButton(
                        text = safeOptions[1],
                        backgroundColor = buttonBg,
                        textColor = buttonTextColor,
                        modifier = Modifier
                            .width(dim.getStartedButtonWidth)
                            .height(dim.getStartedButtonHeight),
                        onClick = { onOptionClick(safeOptions[1]) },
                    )
                }
            }

            // Row 2: options[2], options[3]
            if (safeOptions.size >= 4) {
                Row(
                    modifier = Modifier.fillMaxWidth(),
                    horizontalArrangement = Arrangement.Center,
                    verticalAlignment = Alignment.CenterVertically,
                ) {
                    GetStartedButton(
                        text = safeOptions[2],
                        backgroundColor = buttonBg,
                        textColor = buttonTextColor,
                        modifier = Modifier
                            .width(dim.getStartedButtonWidth)
                            .height(dim.getStartedButtonHeight),
                        onClick = { onOptionClick(safeOptions[2]) },
                    )
                    Spacer(modifier = Modifier.width(dim.getStartedButtonSpacingHorizontal))
                    GetStartedButton(
                        text = safeOptions[3],
                        backgroundColor = buttonBg,
                        textColor = buttonTextColor,
                        modifier = Modifier
                            .width(dim.getStartedButtonWidth)
                            .height(dim.getStartedButtonHeight),
                        onClick = { onOptionClick(safeOptions[3]) },
                    )
                }
            }

            // Row 3: options[4] centered
            if (safeOptions.size >= 5) {
                Box(
                    modifier = Modifier.fillMaxWidth(),
                    contentAlignment = Alignment.Center,
                ) {
                    GetStartedButton(
                        text = safeOptions[4],
                        backgroundColor = buttonBg,
                        textColor = buttonTextColor,
                        modifier = Modifier
                            .width(dim.getStartedButtonWidth)
                            .height(dim.getStartedButtonHeight),
                        onClick = { onOptionClick(safeOptions[4]) },
                    )
                }
            }
        }
    }
}

@Composable
private fun GetStartedButton(
    text: String,
    backgroundColor: Color,
    textColor: Color,
    modifier: Modifier = Modifier,
    onClick: () -> Unit,
) {
    val dim = ChatConstants.Dimensions
    val shape = RoundedCornerShape(dim.getStartedButtonCornerRadius)
    Surface(
        modifier = modifier.clickable(onClick = onClick),
        shape = shape,
        color = backgroundColor,
        shadowElevation = dim.getStartedButtonShadowElevation,
    ) {
        Box(
            modifier = Modifier
                .fillMaxSize()
                .padding(
                    start = dim.getStartedButtonPaddingHorizontal,
                    top = dim.getStartedButtonPaddingVertical,
                    end = dim.getStartedButtonPaddingHorizontal,
                    bottom = dim.getStartedButtonPaddingVertical,
                ),
            contentAlignment = Alignment.Center,
        ) {
            Text(
                text = text,
                style = MaterialTheme.typography.bodyMedium,
                color = textColor,
                textAlign = TextAlign.Center,
            )
        }
    }
}
