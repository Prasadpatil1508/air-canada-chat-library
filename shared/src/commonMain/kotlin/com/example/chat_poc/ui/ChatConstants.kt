package com.example.chat_poc.ui

import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp

/**
 * Central place for all hardcoded UI strings, URLs, and dimensions used by the chat library.
 * Update these values to change copy, links, and layout in one place (Android + iOS).
 */
object ChatConstants {

    // ─── Strings ─────────────────────────────────────────────────────────────────────

    object Strings {
        /** AI disclaimer shown in header and footer. */
        const val DISCLAIMER =
            "AI can make mistakes sometimes. Always double-check important information to ensure accuracy."

        /** Fixed header title (no host-provided title in header). */
        const val HEADER_TITLE = "Air Canada Virtual Assistant"

        /** BETA pill label next to title. */
        const val BETA = "BETA"

        /** Minimize button character. */
        const val MINIMIZE_ICON = "−"

        /** Close button character. */
        const val CLOSE_ICON = "✕"

        /** Welcome message when chat has ended / new chat (card body). */
        const val WELCOME_MESSAGE =
            "Welcome to Live Chat! You'll start by interacting with our automated chatbot, which uses AI to assist you until we connect you with a human agent suited to your needs. By using this service, your information will be used to help improve Live Chat, amongst other things. If you'd prefer to speak with a human agent, or to learn more about how Live Chat collects uses and shares your personal information, please review our "

        /** Privacy policy link label (appended after WELCOME_MESSAGE). */
        const val PRIVACY_POLICY_LINK = "Air Canada Privacy Policy"

        /** Shown when the session has ended. */
        const val CHAT_ENDED = "The chat has ended."

        /** Resume existing session button. */
        const val RESUME_CHAT = "Resume chat"
        const val RESUMING = "Resuming…"

        /** Start new chat button. */
        const val START_NEW_CHAT = "Start a new chat"
        const val CONNECTING = "Connecting…"

        /** Icon shown next to "Start a new chat" (chat bubble). */
        const val START_CHAT_ICON = "💬"

        /** Send message button icon. */
        const val SEND_ICON = "↑"

        /** Error message prefix (e.g. "Error: Connection failed"). */
        const val ERROR_PREFIX = "Error: "

        /** Message input placeholder. */
        const val MESSAGE_PLACEHOLDER = "Message Air Canada"

        /** Shown when a sent message was not confirmed. */
        const val FAILED_TO_SEND = "Failed to send"

        /** Prefix for incoming message label (e.g. "BETA 09:54"). */
        const val INCOMING_LABEL_PREFIX = "BETA "

        /** Fallback title above quick reply buttons when the response does not provide one. */
        const val QUICK_REPLIES_DEFAULT_TITLE = "Quick replies"
    }

    // ─── URLs ───────────────────────────────────────────────────────────────────────

    object Urls {
        /** Privacy policy opened from the new-chat screen. */
        const val PRIVACY_POLICY = "https://www.aircanada.com/privacy"
    }

    // ─── Connect / errors (for UI messages) ───────────────────────────────────────────

    object ConnectErrors {
        const val CONFIG_NOT_SET = "Connect config not set"
        const val CONFIG_NOT_SET_HINT = "Connect config not set (check local.properties)"
    }

    // ─── Message IDs (internal prefixes; for tracking) ───────────────────────────────

    object MessageIdPrefixes {
        const val PENDING = "pending-"
        const val FAILED = "failed-"
        const val FAILED_IMMEDIATE = "failed-immediate"
    }

    // ─── Dimensions (bottom sheet / header / input) ──────────────────────────────────

    object Dimensions {
        val headerPaddingHorizontal: Dp = 20.dp
        val headerPaddingVertical: Dp = 16.dp
        val headerLogoSize: Dp = 80.dp
        val headerLogoSpacer: Dp = 12.dp
        val headerDisclaimerTop: Dp = 8.dp
        val headerBetaPillPaddingH: Dp = 8.dp
        val headerBetaPillPaddingV: Dp = 4.dp
        val headerBetaPillRadius: Dp = 12.dp

        val newChatContentPaddingTop: Dp = 16.dp
        val newChatContentPaddingHorizontal: Dp = 20.dp
        /** No bottom padding so BottomSection extends to sheet bottom. */
        val newChatContentPaddingBottom: Dp = 0.dp
        val newChatCardPadding: Dp = 16.dp
        val newChatCardRadius: Dp = 12.dp
        val newChatInfoIconSize: Dp = 24.dp
        val newChatInfoIconSpacer: Dp = 12.dp
        val newChatWelcomePaddingVertical: Dp = 16.dp
        val newChatPrivacyLinkBottom: Dp = 8.dp
        val newChatSpacerBeforeButtons: Dp = 12.dp
        val newChatChatEndedTop: Dp = 8.dp
        val newChatErrorTop: Dp = 12.dp
        val newChatDisclaimerTop: Dp = 20.dp
        val buttonCornerRadius: Dp = 8.dp

        /** Horizontal padding for message list. Kept >= sheet corner radius so avatars are not clipped by rounded corners. */
        val messageListPaddingHorizontal: Dp = 24.dp
        val avatarSize: Dp = 52.dp
        val outgoingAvatarSize: Dp = 32.dp
        val avatarSpacer: Dp = 3.dp

        val inputRowPadding: Dp = 16.dp
        val inputRowSpacer: Dp = 12.dp
        /** Corner radius for message input box (pill shape) and Start new chat button. Single constant for easy maintenance. */
        val inputBoxCornerRadius: Dp = 24.dp
        /** Height of message input box and Start new chat button (same dimension for both). */
        val inputBoxHeight: Dp = 56.dp
        val sendButtonSize: Dp = 48.dp
        val inputDisclaimerTop: Dp = 12.dp

        /** Reusable bottom section: top-only shadow, rounded top corners, full width to bottom. */
        val bottomSectionTopCornerRadius: Dp = 16.dp
        /** Inner padding for bottom section content (buttons, input). */
        val bottomSectionPadding: Dp = 16.dp
        /** Height of the top shadow strip (shadow only above the panel). */
        val bottomSectionTopShadowHeight: Dp = 8.dp
    }
}
