package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.graphics.painter.ColorPainter

/**
 * iOS: use transparent placeholder to avoid crashes from painterResource in XCFramework.
 */
@Composable
actual fun rememberCustomerAvatarPainter(): Painter = ColorPainter(Color.Transparent)
