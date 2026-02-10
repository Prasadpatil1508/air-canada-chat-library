package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.graphics.painter.ColorPainter

/**
 * iOS: use transparent placeholder to avoid crashes from painterResource (Compose resources
 * can fail to load in XCFramework). Avatars/logo still render as a valid area; swap back to
 * painterResource(Res.drawable.ai_avatar) once resource bundling is verified.
 */
@Composable
actual fun rememberAiAvatarPainter(): Painter = ColorPainter(Color.Transparent)
