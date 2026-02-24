package com.example.chat_poc.markdown

import androidx.compose.runtime.Composable

/**
 * Expect/actual Markdown renderer. SDK-internal only; host app must not render Markdown.
 * Android: Markwon (TextView + tables). iOS: mikepenz multiplatform-markdown-renderer (full MD + tables).
 */
expect object MarkdownRenderer {
    @Composable
    fun Render(markdown: String)
}
