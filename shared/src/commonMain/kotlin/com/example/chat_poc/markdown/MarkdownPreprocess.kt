package com.example.chat_poc.markdown

/**
 * Preprocesses raw markdown before rendering so it displays correctly on both Android and iOS.
 * - Unescapes JSON-style Unicode (e.g. \u2708\ufe0f → ✈️)
 * - Converts HTML <a href="...">text</a> to markdown [text](url) for consistent link handling
 * - Normalizes table separator lines (e.g. |--------|| → |--------|) to avoid parser issues
 */
fun preprocessMarkdownForRender(raw: String): String {
    if (raw.isBlank()) return raw
    var s = raw
    // Unescape Unicode escapes (e.g. \u2708\ufe0f)
    s = unescapeUnicode(s)
    // Convert HTML links to markdown links so both platforms render them
    s = htmlLinksToMarkdown(s)
    // Normalize table separator: |---|| at end of line → |---|
    s = normalizeTableSeparator(s)
    return s
}

private val unicodeEscapeRegex = Regex("""\\u([0-9a-fA-F]{4})""")

/** Converts a Unicode code point to String (KMP-safe; no JVM Character class). */
private fun codePointToString(code: Int): String {
    return when {
        code in 0..0xFFFF -> Char(code).toString()
        code in 0x10000..0x10FFFF -> {
            val offset = code - 0x10000
            val high = (offset / 0x400) + 0xD800
            val low = (offset % 0x400) + 0xDC00
            charArrayOf(Char(high), Char(low)).concatToString()
        }
        else -> ""
    }
}

private fun unescapeUnicode(s: String): String {
    return unicodeEscapeRegex.replace(s) { match ->
        val code = match.groupValues[1].toInt(16)
        codePointToString(code)
    }
}

private val htmlLinkRegex = Regex(
    """<a\s+href\s*=\s*["']([^"']+)["'][^>]*>([^<]*)</\s*a\s*>""",
    RegexOption.IGNORE_CASE
)

private fun htmlLinksToMarkdown(s: String): String {
    return htmlLinkRegex.replace(s) { mr ->
        val url = mr.groupValues[1].trim()
        val text = mr.groupValues[2].trim()
        "[$text]($url)"
    }
}

/** Fix table separator lines like |--------|| to |--------| so parsers don't break. */
private fun normalizeTableSeparator(s: String): String {
    return s.replace(Regex("""(\|[:\s\-]+\|)\|(\s*)$""", RegexOption.MULTILINE)) { match ->
        match.groupValues[1] + match.groupValues[2]
    }
}
