package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.painter.Painter

/**
 * Returns a [Painter] for the header logo (e.g. Air Canada maple leaf).
 * Android: loaded from Base64-embedded asset. iOS: loaded from Compose resources.
 */
@Composable
expect fun rememberHeaderLogoPainter(): Painter
