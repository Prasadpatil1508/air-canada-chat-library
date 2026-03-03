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
actual fun rememberAcAgentDarkAvatarPainter(): Painter {
    return remember {
        decodeAcAgentPainter(AcAgentDarkAvatarData.BASE64)
    }
}

@Composable
actual fun rememberAcAgentLightAvatarPainter(): Painter {
    return remember {
        decodeAcAgentPainter(AcAgentLightAvatarData.BASE64)
    }
}

private fun decodeAcAgentPainter(base64: String): Painter {
    return try {
        val bytes = decodeBase64(base64)
        if (bytes.isEmpty()) return ColorPainter(Color.LightGray)
        val image = Image.makeFromEncoded(bytes)
        val bitmap: ImageBitmap = image.toComposeImageBitmap()
        if (bitmap.width < 4 || bitmap.height < 4) ColorPainter(Color.LightGray)
        else BitmapPainter(bitmap)
    } catch (_: Exception) {
        ColorPainter(Color.LightGray)
    }
}
