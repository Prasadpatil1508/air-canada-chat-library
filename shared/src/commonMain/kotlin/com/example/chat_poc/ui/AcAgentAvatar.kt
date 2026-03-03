package com.example.chat_poc.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.painter.Painter

/**
 * Returns a [Painter] for the real (human) agent avatar — dark theme variant (ac_agent_dark.png).
 * Use this for incoming messages when the payload indicates a real agent (not AI) and dark theme is active.
 */
@Composable
expect fun rememberAcAgentDarkAvatarPainter(): Painter

/**
 * Returns a [Painter] for the real (human) agent avatar — light theme variant (ac_agent_light.png).
 * Use this for incoming messages when the payload indicates a real agent (not AI) and light theme is active.
 */
@Composable
expect fun rememberAcAgentLightAvatarPainter(): Painter
