package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ImageBitmap
import androidx.compose.ui.graphics.painter.BitmapPainter
import androidx.compose.ui.graphics.painter.ColorPainter
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.graphics.toComposeImageBitmap
import com.example.chat_poc.util.decodeBase64
import org.jetbrains.skia.Image

@Composable
actual fun rememberCustomerAvatarPainter(): Painter {
    return remember {
        try {
            val bytes = decodeBase64(CustomerAvatarData.BASE64)
            val image = Image.makeFromEncoded(bytes)
            val bitmap: ImageBitmap = image.toComposeImageBitmap()
            BitmapPainter(bitmap)
        } catch (_: Exception) {
            ColorPainter(Color.Transparent)
        }
    }
}
