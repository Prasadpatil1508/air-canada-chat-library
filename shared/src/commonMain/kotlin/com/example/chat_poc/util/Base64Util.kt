package com.example.chat_poc.util

/**
 * Decodes a Base64-encoded string to [ByteArray].
 * Works on all platforms (used by iOS; Android uses android.util.Base64 in platform code).
 */
fun decodeBase64(str: String): ByteArray {
    val table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
    val clean = str.filter { it.isLetterOrDigit() || it == '+' || it == '/' || it == '=' }
    val padding = clean.count { it == '=' }
    val input = clean.dropLast(padding).ifEmpty { return ByteArray(0) }
    val output = ByteArray((input.length * 3) / 4)
    var outIdx = 0
    var acc = 0
    var bits = 0
    for (c in input) {
        val n = table.indexOf(c)
        if (n < 0) continue
        acc = (acc shl 6) or n
        bits += 6
        if (bits >= 8) {
            bits -= 8
            output[outIdx++] = (acc shr bits).toByte()
        }
    }
    return output.copyOf(outIdx)
}
