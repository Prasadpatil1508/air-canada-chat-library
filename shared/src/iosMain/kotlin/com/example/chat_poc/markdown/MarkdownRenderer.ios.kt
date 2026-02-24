package com.example.chat_poc.markdown

import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.TextLinkStyles
import androidx.compose.ui.unit.dp
import com.mikepenz.markdown.model.DefaultMarkdownTypography
import com.mikepenz.markdown.m3.Markdown

/** Convert HTML <a href="...">text</a> to markdown [text](url) for the renderer. */
private fun preprocessHtmlLinks(markdown: String): String {
    return Regex("""<a\s+href\s*=\s*["']([^"']+)["'][^>]*>([^<]*)</\s*a\s*>""", RegexOption.IGNORE_CASE)
        .replace(markdown) { mr -> "[${mr.groupValues[2].trim()}](${mr.groupValues[1].trim()})" }
}

/** Typography with all elements at body size so markdown matches normal message text. */
@Composable
private fun messageSizeMarkdownTypography(): DefaultMarkdownTypography {
    val body = MaterialTheme.typography.bodyMedium
    return DefaultMarkdownTypography(
        h1 = body,
        h2 = body,
        h3 = body,
        h4 = body,
        h5 = body,
        h6 = body,
        text = body,
        code = body,
        inlineCode = body,
        quote = body,
        paragraph = body,
        ordered = body,
        bullet = body,
        list = body,
        textLink = TextLinkStyles(),
        table = body,
    )
}

/**
 * Renders markdown on iOS using [mikepenz multiplatform-markdown-renderer](https://github.com/mikepenz/multiplatform-markdown-renderer).
 * Typography set to body size so headings and content match normal message size.
 */
actual object MarkdownRenderer {
    @Composable
    actual fun Render(markdown: String) {
        val trimmed = markdown.trim()
        if (trimmed.isEmpty()) return

        val content = remember(trimmed) { preprocessHtmlLinks(trimmed) }
        val typography = messageSizeMarkdownTypography()

        Markdown(
            content = content,
            typography = typography,
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = 8.dp, vertical = 6.dp),
        )
    }
}
