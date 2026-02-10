package com.example.chat_poc.util

/**
 * Formats an ISO 8601 timestamp (e.g. "2026-02-05T05:32:17.697Z") to "HH:mm".
 * Returns empty string if the input is blank or not in the expected format.
 */
fun formatMessageTime(isoTimestamp: String): String {
    if (isoTimestamp.isBlank()) return ""
    val tIndex = isoTimestamp.indexOf('T')
    if (tIndex < 0 || tIndex + 6 > isoTimestamp.length) return ""
    return isoTimestamp.substring(tIndex + 1, tIndex + 6)
}
