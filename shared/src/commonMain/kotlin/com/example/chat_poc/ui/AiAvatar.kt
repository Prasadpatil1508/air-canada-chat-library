package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.painter.Painter

/**
 * Returns a [Painter] for the AI/incoming message avatar.
 * Android: Base64-embedded at build time from composeResources (reliable in library AAR).
 * iOS: loaded from Compose Multiplatform resources.
 */
@Composable
expect fun rememberAiAvatarPainter(): Painter
