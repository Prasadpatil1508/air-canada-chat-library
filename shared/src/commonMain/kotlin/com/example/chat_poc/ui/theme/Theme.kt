package com.example.chat_poc.ui.theme

import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.darkColorScheme
import androidx.compose.material3.lightColorScheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color

/**
 * Chat library theme (colors + typography) aligned with
 * [amazon-connect-chat-ui-examples](https://github.com/amazon-connect/amazon-connect-chat-ui-examples).
 * Use [ChatPocTheme] to wrap chat UI (e.g. bottom sheet content).
 * Supports light and dark modes for header and surfaces.
 */
private val DarkColorScheme = darkColorScheme(
    primary = Purple80,
    secondary = PurpleGrey80,
    tertiary = Pink80,
    surface = HeaderBackgroundDark,
    onSurface = HeaderOnBackgroundDark,
)

private val LightColorScheme = lightColorScheme(
    primary = ChatPrimary,
    onPrimary = Color.White,
    primaryContainer = ChatPrimaryLight,
    onPrimaryContainer = Color.White,
    secondary = PurpleGrey40,
    tertiary = Pink40,
    surface = HeaderBackgroundLight,
    onSurface = HeaderOnBackgroundLight,
    onSurfaceVariant = ChatOnSurfaceVariant,
    outline = ChatPrimary,
)

@Composable
fun ChatPocTheme(
    darkTheme: Boolean = false,
    content: @Composable () -> Unit,
) {
    val colorScheme = if (darkTheme) DarkColorScheme else LightColorScheme
    MaterialTheme(
        colorScheme = colorScheme,
        typography = ChatTypography,
        content = content,
    )
}
