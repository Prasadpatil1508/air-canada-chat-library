package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.painter.Painter

/**
 * Returns a [Painter] for the header logo (AC logo: Air Canada circular logo).
 * Android: loaded from Base64-embedded ac_logo.png. iOS: placeholder (or Compose Res.drawable.ac_logo).
 */
@Composable
expect fun rememberHeaderLogoPainter(): Painter
