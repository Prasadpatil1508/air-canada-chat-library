package com.example.chat_poc.markdown

import androidx.compose.runtime.Composable

/**
 * Expect/actual Markdown renderer. SDK-internal only; host app must not render Markdown.
 * Android: Markwon (TextView + tables). iOS: Compose-native (MarkdownText + block parsing for headers/lists).
 */
expect object MarkdownRenderer {
    @Composable
    fun Render(markdown: String)
}
