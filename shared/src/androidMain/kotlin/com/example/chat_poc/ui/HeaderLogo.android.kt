package com.example.chat_poc.ui

import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.util.Base64
import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.graphics.asImageBitmap
import androidx.compose.ui.graphics.painter.BitmapPainter

@Composable
actual fun rememberHeaderLogoPainter(): Painter {
    return remember {
        try {
            val bytes = Base64.decode(HeaderLogoData.BASE64, Base64.DEFAULT)
            val bitmap = BitmapFactory.decodeByteArray(bytes, 0, bytes.size)
            if (bitmap != null) {
                BitmapPainter(bitmap.asImageBitmap())
            } else {
                BitmapPainter(Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_8888).asImageBitmap())
            }
        } catch (_: Exception) {
            BitmapPainter(Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_8888).asImageBitmap())
        }
    }
}
