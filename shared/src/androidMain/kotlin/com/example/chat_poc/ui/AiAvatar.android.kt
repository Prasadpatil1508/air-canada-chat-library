package com.example.chat_poc.ui

import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.graphics.Canvas
import android.graphics.Paint
import android.graphics.Rect
import android.util.Base64
import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.graphics.asImageBitmap
import androidx.compose.ui.graphics.painter.BitmapPainter

private const val FALLBACK_SIZE_PX = 96

@Composable
actual fun rememberAiAvatarPainter(): Painter {
    return remember {
        try {
            val bytes = Base64.decode(AiAvatarData.BASE64, Base64.DEFAULT)
            val bitmap = BitmapFactory.decodeByteArray(bytes, 0, bytes.size)
            if (bitmap != null) {
                BitmapPainter(bitmap.asImageBitmap())
            } else {
                createFallbackPainter()
            }
        } catch (_: Exception) {
            createFallbackPainter()
        }
    }
}

private fun createFallbackPainter(): BitmapPainter {
    val bitmap = Bitmap.createBitmap(FALLBACK_SIZE_PX, FALLBACK_SIZE_PX, Bitmap.Config.ARGB_8888)
    val canvas = Canvas(bitmap)
    val paint = Paint().apply { isAntiAlias = true }
    paint.color = 0xFFE0E0E0.toInt()
    canvas.drawCircle(FALLBACK_SIZE_PX / 2f, FALLBACK_SIZE_PX / 2f, FALLBACK_SIZE_PX / 2f - 2f, paint)
    paint.color = 0xFF757575.toInt()
    paint.textSize = (FALLBACK_SIZE_PX * 0.35f).coerceAtLeast(12f)
    paint.textAlign = Paint.Align.CENTER
    val text = "AI"
    val bounds = Rect()
    paint.getTextBounds(text, 0, text.length, bounds)
    canvas.drawText(
        text,
        FALLBACK_SIZE_PX / 2f,
        FALLBACK_SIZE_PX / 2f + bounds.height() / 2f,
        paint
    )
    return BitmapPainter(bitmap.asImageBitmap())
}
