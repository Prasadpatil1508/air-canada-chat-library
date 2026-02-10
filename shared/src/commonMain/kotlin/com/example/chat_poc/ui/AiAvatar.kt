package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.painter.Painter

/**
 * Returns a [Painter] for the AI/incoming message avatar.
 * Android: loaded from the library's res/drawable (reliably merged into the host APK).
 * iOS: loaded from Compose Multiplatform resources.
 */
@Composable
expect fun rememberAiAvatarPainter(): Painter
