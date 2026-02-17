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

/** Light grey background for bottom section so the white input box is highlighted. */
val BottomSectionBackground = Color(0xFFF2F2F7)

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
/** Beta badge background – blue, same in both themes. */
val HeaderBetaBadgeBackground = Color(0xFF007AFF)
/** Beta badge text – white. */
val HeaderBetaBadgeOnBackground = Color(0xFFFFFFFF)
