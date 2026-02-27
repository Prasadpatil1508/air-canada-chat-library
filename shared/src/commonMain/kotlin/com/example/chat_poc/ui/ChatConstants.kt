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

        /** Fixed header title (main line in bottom sheet header). */
        const val HEADER_TITLE = "AC Assistant"

        /** BETA pill label next to title. */
        const val BETA = "BETA"

        /** Default header subtitle when no custom subtitle is provided (e.g. later replace with user name). */
        const val HEADER_SUBTITLE_DEFAULT = "Chatting with Air Canada"

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

        /** Input field placeholder (bottom section). */
        const val INPUT_PLACEHOLDER = "Type a message"

        /** Disclaimer below input (bottom section). */
        const val INPUT_DISCLAIMER =
            "This chat uses AI to find answers to your questions. Always double-check important information to ensure accuracy."

        /** Shown when a sent message was not confirmed. */
        const val FAILED_TO_SEND = "Failed to send"

        /** Prefix for incoming message label (e.g. "BETA 09:54"). */
        const val INCOMING_LABEL_PREFIX = "BETA "
        /** Label for outgoing (user) messages shown at top right above the bubble (Figma). */
        const val OUTGOING_SENDER_LABEL = "You"
        /** Default agent name when [ChatMessage.displayName] is null/blank or system (shown next to avatar). */
        const val INCOMING_AGENT_NAME_DEFAULT = "AC Agent"
        /** displayName values treated as system/internal; show [INCOMING_AGENT_NAME_DEFAULT] instead. */
        val INCOMING_AGENT_NAME_SYSTEM_VALUES: Set<String> = setOf("SYSTEM_MESSAGE", "SYSTEM")

        /** Fallback title above quick reply buttons when the response does not provide one. */
        const val QUICK_REPLIES_DEFAULT_TITLE = "Quick replies"

        /** Get-started prompt shown when chat is opened for the first time (floated buttons). */
        const val GET_STARTED_PROMPT = "Not sure where to get started?"

        /** Default get-started option labels (hardcoded until backend provides). Order: row1 left, row1 right, row2 left, row2 right, row3 center. */
        val GET_STARTED_OPTIONS: List<String> = listOf(
            "Flight disruption",
            "Booking change",
            "Seat change",
            "Baggage claim",
            "Aeroplan",
        )
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
        // Bottom sheet header (redesigned: grab handle, logo, title, beta, subtitle, separator)
        val headerTopCornerRadius: Dp = 20.dp
        val headerGrabHandleWidth: Dp = 36.dp
        val headerGrabHandleHeight: Dp = 4.dp
        val headerGrabHandleTopMargin: Dp = 8.dp
        val headerGrabHandleBottomMargin: Dp = 12.dp
        /** Inner padding for header content (left, right, bottom) – design 15. */
        val headerPaddingHorizontal: Dp = 15.dp
        val headerContentPaddingBottom: Dp = 15.dp
        /** Vertical gap between title row and subtitle row – less than bottom padding. */
        val headerTitleToSubtitleSpacer: Dp = 0.dp
        val headerLogoSize: Dp = 25.dp
        /** Spacing between logo and title in the top row. */
        val headerLogoTitleSpacer: Dp = 8.dp
        /** Spacing between title and Beta tag. */
        val headerTitleBetaSpacer: Dp = 6.dp
        val headerBetaPillPaddingH: Dp = 8.dp
        val headerBetaPillPaddingV: Dp = 4.dp
        val headerBetaPillRadius: Dp = 16.dp
        val headerSeparatorHeight: Dp = 1.dp
        val headerSeparatorTopMargin: Dp = 12.dp
        val headerLogoSpacer: Dp = 12.dp
        val headerDisclaimerTop: Dp = 8.dp

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
        /** AI agent avatar: slightly larger than message text line height (bodyMedium). */
        val avatarSize: Dp = 24.dp
        val outgoingAvatarSize: Dp = 24.dp
        val avatarSpacer: Dp = 3.dp

        val inputRowPadding: Dp = 16.dp
        val inputRowSpacer: Dp = 12.dp
        /** Corner radius for message input field (pill shape). */
        val inputBoxCornerRadius: Dp = 30.dp
        /** Height of message input field and row. */
        val inputBoxHeight: Dp = 60.dp
        /** Inner padding for message input field (start, top, end, bottom). */
        val inputFieldPadding: Dp = 12.dp
        /** Send button: circular, sized smaller than input row per design. */
        val sendButtonSize: Dp = 34.dp
        /** Send icon size, proportional to [sendButtonSize]. */
        val sendIconSize: Dp = 16.dp
        val inputDisclaimerTop: Dp = 12.dp

        /** Reusable bottom section: top-only shadow, rounded top corners, full width to bottom. */
        val bottomSectionTopCornerRadius: Dp = 16.dp
        /** Inner padding for bottom section content (buttons, input). */
        val bottomSectionPadding: Dp = 16.dp
        /** Height of the top shadow strip (shadow only above the panel). */
        val bottomSectionTopShadowHeight: Dp = 8.dp

        // Get-started floated buttons (first-time open) – Figma
        /** Content block width (Figma). Height is wrap-content so all five buttons are visible. */
        val getStartedBlockWidth: Dp = 345.dp
        /** Horizontal (side) inner padding from sheet edges (Figma: 15.dp). */
        val getStartedBlockPaddingHorizontal: Dp = 15.dp
        /** Vertical spacing between prompt and button rows (Figma: 15.dp). */
        val getStartedVerticalSpacing: Dp = 15.dp
        val getStartedSectionPaddingTop: Dp = 16.dp
        val getStartedSectionPaddingBottom: Dp = 16.dp
        val getStartedButtonSpacingHorizontal: Dp = 12.dp
        /** Button size (Figma). */
        val getStartedButtonWidth: Dp = 137.dp
        val getStartedButtonHeight: Dp = 49.dp
        val getStartedButtonCornerRadius: Dp = 15.dp
        /** Inner padding: 15.dp above and below label, 15.dp left/right. */
        val getStartedButtonPaddingVertical: Dp = 15.dp
        val getStartedButtonPaddingHorizontal: Dp = 15.dp
        /** Default Material shadow elevation for floated buttons. */
        val getStartedButtonShadowElevation: Dp = 10.dp
    }
}
