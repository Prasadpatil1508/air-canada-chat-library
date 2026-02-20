package com.example.chat_poc.markdown

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.width
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.example.chat_poc.ui.MarkdownText

private const val BULLET = "• "

/** Convert HTML <a href="...">text</a> to markdown [text](url) so MarkdownText can render it. */
private fun preprocessHtmlLinks(markdown: String): String {
    // Match <a href="url" ...>text</a> or <a href='url' ...>text</a>; allow space in closing tag (e.g. </ a>)
    return Regex("""<a\s+href\s*=\s*["']([^"']+)["'][^>]*>([^<]*)</\s*a\s*>""", RegexOption.IGNORE_CASE)
        .replace(markdown) { mr -> "[${mr.groupValues[2].trim()}](${mr.groupValues[1].trim()})" }
}

/** True if the block looks like a table (has | and multiple lines). */
private fun isTableBlock(block: String): Boolean {
    val lines = block.split("\n").filter { it.isNotBlank() }
    if (lines.size < 2) return false
    return lines.all { it.contains('|') }
}

/** Parse a table block into rows of cells (trimmed); skip separator line. */
private fun parseTableRows(block: String): List<List<String>> {
    return block.split("\n")
        .map { line ->
            line.split("|").map { it.trim() }.filter { it.isNotEmpty() }
        }
        .filterNot { row -> row.isNotEmpty() && row.all { cell -> cell.all { c -> c == '-' || c == ' ' } } }
}

@Composable
private fun RenderTable(rows: List<List<String>>, color: Color) {
    if (rows.isEmpty()) return
    val headerRow = rows.first()
    val dataRows = if (rows.size > 1) rows.drop(1) else emptyList()
    Column(
        modifier = Modifier
            .fillMaxWidth()
            .padding(vertical = 4.dp),
    ) {
        Row(
            modifier = Modifier.fillMaxWidth(),
            verticalAlignment = Alignment.CenterVertically,
        ) {
            headerRow.forEachIndexed { i, cell ->
                if (i > 0) Spacer(modifier = Modifier.width(8.dp))
                Text(
                    text = cell,
                    style = MaterialTheme.typography.labelMedium,
                    color = color,
                    modifier = Modifier.weight(1f),
                )
            }
        }
        HorizontalDivider(
            modifier = Modifier.padding(vertical = 4.dp),
            color = color.copy(alpha = 0.3f),
        )
        dataRows.forEach { row ->
            Row(
                modifier = Modifier.fillMaxWidth(),
                verticalAlignment = Alignment.CenterVertically,
            ) {
                row.forEachIndexed { i, cell ->
                    if (i > 0) Spacer(modifier = Modifier.width(8.dp))
                    Column(modifier = Modifier.weight(1f)) {
                        MarkdownText(text = cell, color = color)
                    }
                }
            }
        }
    }
}

/** Renders markdown natively on iOS: **bold**, [links](url), HTML <a>, #/##/###/####, ---, lists, tables. */
actual object MarkdownRenderer {
    @Composable
    actual fun Render(markdown: String) {
        val trimmed = markdown.trim()
        if (trimmed.isEmpty()) return

        val preprocessed = preprocessHtmlLinks(trimmed)
        val color = MaterialTheme.colorScheme.onSurfaceVariant
        val blockSpacing = 6.dp
        val blockPadding = 8.dp

        Column(
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = blockPadding, vertical = 6.dp),
        ) {
            val blocks = preprocessed.split("\n\n").map { it.trim() }.filter { it.isNotEmpty() }
            blocks.forEachIndexed { index, block ->
                if (index > 0) Spacer(modifier = Modifier.height(blockSpacing))
                RenderBlock(block = block, color = color)
            }
        }
    }
}

@Composable
private fun RenderBlock(block: String, color: Color) {
    val lines = block.split("\n").map { it.trim() }.filter { it.isNotEmpty() }
    val isList = lines.isNotEmpty() && lines.all { it.startsWith("- ") || it.startsWith("* ") }

    when {
        isList -> {
            Column(modifier = Modifier.fillMaxWidth()) {
                lines.forEachIndexed { lineIndex, line ->
                    if (lineIndex > 0) Spacer(modifier = Modifier.height(2.dp))
                    val content = when {
                        line.startsWith("- ") -> line.removePrefix("- ")
                        line.startsWith("* ") -> line.removePrefix("* ")
                        else -> line
                    }
                    Row(
                        modifier = Modifier.fillMaxWidth(),
                        verticalAlignment = Alignment.Top,
                    ) {
                        Text(
                            text = BULLET,
                            style = MaterialTheme.typography.bodyMedium,
                            color = color,
                        )
                        Spacer(modifier = Modifier.width(4.dp))
                        Column(modifier = Modifier.weight(1f)) {
                            MarkdownText(text = content, color = color)
                        }
                    }
                }
            }
        }
        isTableBlock(block) -> {
            val rows = parseTableRows(block)
            RenderTable(rows = rows, color = color)
        }
        block.matches(Regex("^[-*_]{3,}\\s*$")) -> {
            HorizontalDivider(
                modifier = Modifier.padding(vertical = 4.dp),
                color = color.copy(alpha = 0.4f),
            )
        }
        block.startsWith("#### ") -> {
            Text(
                text = block.removePrefix("#### ").replace("\n", " "),
                style = MaterialTheme.typography.labelLarge,
                color = color,
                modifier = Modifier.fillMaxWidth(),
            )
        }
        block.startsWith("### ") -> {
            Text(
                text = block.removePrefix("### ").replace("\n", " "),
                style = MaterialTheme.typography.titleSmall,
                color = color,
                modifier = Modifier.fillMaxWidth(),
            )
        }
        block.startsWith("## ") -> {
            Text(
                text = block.removePrefix("## ").replace("\n", " "),
                style = MaterialTheme.typography.titleMedium,
                color = color,
                modifier = Modifier.fillMaxWidth(),
            )
        }
        block.startsWith("# ") -> {
            Text(
                text = block.removePrefix("# ").replace("\n", " "),
                style = MaterialTheme.typography.titleLarge,
                color = color,
                modifier = Modifier.fillMaxWidth(),
            )
        }
        else -> {
            MarkdownText(text = block, color = color)
        }
    }
}
