package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.painter.Painter

/**
 * Returns a [Painter] for the customer/outgoing message avatar.
 * Android: loaded from Base64-embedded asset (reliably in library AAR).
 * iOS: loaded from Compose Multiplatform resources.
 */
@Composable
expect fun rememberCustomerAvatarPainter(): Painter
