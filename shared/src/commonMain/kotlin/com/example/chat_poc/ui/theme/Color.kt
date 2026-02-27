package com.example.chat_poc.ui.theme

import androidx.compose.ui.graphics.Color

/**
 * Chat library color palette.
 * Primary blue and grey for Air Canada–style chat UI (Android + iOS).
 * Header and surface colors support light/dark themes.
 */
val Purple80 = Color(0xFFD0BCFF)
val PurpleGrey80 = Color(0xFFCCC2DC)
val Pink80 = Color(0xFFEFB8C8)

val Purple40 = Color(0xFF6650a4)
val PurpleGrey40 = Color(0xFF625b71)
val Pink40 = Color(0xFF7D5260)

/** Primary blue for buttons and accents (Air Canada–style). */
val ChatPrimary = Color(0xFF002C77)
val ChatPrimaryLight = Color(0xFF4A7BC9)
/** Secondary text and disclaimers. */
val ChatOnSurfaceVariant = Color(0xFF5C5C5C)
val ChatDisclaimer = Color(0xFF6B7280)

/** Outgoing (user) message bubble background – Grey/Grey-9 (#2A2A2A), same in light and dark mode. */
val OutgoingBubbleBackground = Color(0xFF2A2A2A)
/** Text/content color on outgoing bubble (light for contrast). */
val OutgoingBubbleOnBackground = Color(0xFFFFFFFF)

/** Bottom section background – light theme (Figma: pure white). Dark theme uses [HeaderBackgroundDark] via MaterialTheme.colorScheme.surface. */
val BottomSectionBackgroundLight = Color(0xFFFFFFFF)

// ─── Bottom sheet header (light theme) ─────────────────────────────────────────────
/** Header background – light theme. */
val HeaderBackgroundLight = Color(0xFFFFFFFF)
/** Grab handle pill – light theme. */
val HeaderGrabHandleLight = Color(0xFFE0E0E0)
/** Header separator line – light theme. */
val HeaderSeparatorLight = Color(0xFFEEEEEE)
/** Icon and title text – light theme. */
val HeaderOnBackgroundLight = Color(0xFF1C1C1E)
/** Subtitle text – light theme. */
val HeaderSubtitleLight = Color(0xFF5C5C5C)

// ─── Bottom sheet header (dark theme) ─────────────────────────────────────────────
/** Header background – dark theme. */
val HeaderBackgroundDark = Color(0xFF1C1C1E)
/** Grab handle pill – dark theme. */
val HeaderGrabHandleDark = Color(0xFF3A3A3C)
/** Header separator line – dark theme. */
val HeaderSeparatorDark = Color(0xFF2C2C2E)
/** Icon and title text – dark theme. */
val HeaderOnBackgroundDark = Color(0xFFFFFFFF)
/** Subtitle text – dark theme. */
val HeaderSubtitleDark = Color(0xFFB0B0B0)

// ─── Header elements (theme-invariant) ─────────────────────────────────────────────
/** Air Canada logo accent (red) – same in light and dark. */
val HeaderLogoAccent = Color(0xFFC8102E)
/** Beta badge border/icon blue – same in both themes. */
val HeaderBetaBadgeBackground = Color(0xFF007AFF)
/** Beta badge pill background – dark theme (dark/black). */
val HeaderBetaBadgePillBackgroundDark = Color(0xFF2C2C2E)
/** Beta badge text on dark pill – white. */
val HeaderBetaBadgeOnBackground = Color(0xFFFFFFFF)

// ─── Bottom section input (light theme) ─────────────────────────────────────────────
/** Input field background – light (default/active). AltCardOverSheet. */
val InputBackgroundLight = Color(0xFFF2F1EF)
/** Input field inner background – light (disabled state, white interior). */
val InputBackgroundDisabledLight = Color(0xFFFFFFFF)
/** Input field border – light (disabled state). PlaceholderText. */
val InputBorderLight = Color(0xFFBABBBC)
/** Input placeholder – light (default/active). */
val InputPlaceholderLight = Color(0xFF5C5C5C)
/** Input placeholder – light (disabled, lighter). */
val InputPlaceholderDisabledLight = Color(0xFFB0B0B0)
/** Send button inactive – light. */
val SendButtonInactiveLight = Color(0xFFCCCCCC)
/** Send button active – same blue in both themes. */
val SendButtonActive = Color(0xFF007AFF)

// ─── Bottom section input (dark theme) ─────────────────────────────────────────────
/** Input field background – dark (default/active). */
val InputBackgroundDark = Color(0xFF2C2C2E)
/** Input field inner background – dark (disabled state). */
val InputBackgroundDisabledDark = Color(0xFF2C2C2E)
/** Input field border – dark (disabled state). */
val InputBorderDark = Color(0xFF696969)
/** Input placeholder – dark. */
val InputPlaceholderDark = Color(0xFFB0B0B0)
/** Input placeholder – dark (disabled). */
val InputPlaceholderDisabledDark = Color(0xFF636366)
/** Send button inactive – dark. */
val SendButtonInactiveDark = Color(0xFF48484A)

// ─── Get-started floated buttons (first-time open) ───────────────────────────────────
/** Get-started button background – light (white). */
val GetStartedButtonBgLight = Color(0xFFFFFFFF)
/** Get-started button text – light (black). */
val GetStartedButtonTextLight = Color(0xFF1C1C1E)
/** Get-started button background – dark (dark grey). */
val GetStartedButtonBgDark = Color(0xFF2C2C2E)
/** Get-started button text – dark (white). */
val GetStartedButtonTextDark = Color(0xFFFFFFFF)
