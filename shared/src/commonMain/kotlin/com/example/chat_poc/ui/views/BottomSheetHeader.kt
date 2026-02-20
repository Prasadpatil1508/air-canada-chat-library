package com.example.chat_poc.ui.views

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material.icons.filled.ExpandMore
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.IconButtonDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.example.chat_poc.ui.ChatConstants
import com.example.chat_poc.ui.rememberHeaderLogoPainter
import com.example.chat_poc.ui.theme.HeaderBackgroundDark
import com.example.chat_poc.ui.theme.HeaderBackgroundLight
import com.example.chat_poc.ui.theme.HeaderBetaBadgeBackground
import com.example.chat_poc.ui.theme.HeaderBetaBadgePillBackgroundDark
import com.example.chat_poc.ui.theme.HeaderGrabHandleDark
import com.example.chat_poc.ui.theme.HeaderGrabHandleLight
import com.example.chat_poc.ui.theme.HeaderOnBackgroundDark
import com.example.chat_poc.ui.theme.HeaderOnBackgroundLight
import com.example.chat_poc.ui.theme.HeaderSeparatorDark
import com.example.chat_poc.ui.theme.HeaderSeparatorLight
import com.example.chat_poc.ui.theme.HeaderSubtitleDark
import com.example.chat_poc.ui.theme.HeaderSubtitleLight
import com.example.chat_poc.ui.theme.HeaderSubtitleStyle
import com.example.chat_poc.ui.theme.HeaderTitleStyle
import androidx.compose.foundation.Image

/**
 * Bottom sheet header (Material 3): grab handle, then one row of [Close | AC logo | Title + Beta | Minimize], then subtitle row, then separator.
 *
 * @param subtitle Second row text (e.g. "Chatting with Air Canada" or user name).
 * @param onClose Called when close (X) is clicked.
 * @param onMinimize Called when minimize is clicked.
 */
@Composable
fun BottomSheetHeader(
    subtitle: String,
    onClose: () -> Unit,
    onMinimize: () -> Unit,
    modifier: Modifier = Modifier,
) {
    val colorScheme = MaterialTheme.colorScheme
    val surface = colorScheme.surface
    val isDark = (surface.red * 0.299f + surface.green * 0.587f + surface.blue * 0.114f) < 0.5f
    val headerBackground = if (isDark) HeaderBackgroundDark else HeaderBackgroundLight
    val grabHandleColor = if (isDark) HeaderGrabHandleDark else HeaderGrabHandleLight
    val onHeader = if (isDark) HeaderOnBackgroundDark else HeaderOnBackgroundLight
    val subtitleColor = if (isDark) HeaderSubtitleDark else HeaderSubtitleLight
    val separatorColor = if (isDark) HeaderSeparatorDark else HeaderSeparatorLight

    val dim = ChatConstants.Dimensions

    Column(
        modifier = modifier
            .fillMaxWidth()
            .clip(
                RoundedCornerShape(
                    topStart = dim.headerTopCornerRadius,
                    topEnd = dim.headerTopCornerRadius,
                ),
            )
            .background(headerBackground),
    ) {
        // Grab handle
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .padding(top = dim.headerGrabHandleTopMargin, bottom = dim.headerGrabHandleBottomMargin),
            contentAlignment = Alignment.Center,
        ) {
            Box(
                modifier = Modifier
                    .size(width = dim.headerGrabHandleWidth, height = dim.headerGrabHandleHeight)
                    .clip(RoundedCornerShape(2.dp))
                    .background(grabHandleColor),
            )
        }

        // Row 1: Close (fixed) | [AC logo + Title + Beta centered] | Minimize (fixed)
        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = dim.headerPaddingHorizontal),
            verticalAlignment = Alignment.CenterVertically,
        ) {
            IconButton(
                onClick = onClose,
                modifier = Modifier.size(48.dp),
                colors = IconButtonDefaults.iconButtonColors(
                    contentColor = onHeader,
                ),
            ) {
                Icon(
                    imageVector = Icons.Filled.Close,
                    contentDescription = "Close",
                )
            }

            Box(
                modifier = Modifier
                    .weight(1f)
                    .fillMaxWidth(),
                contentAlignment = Alignment.Center,
            ) {
                Row(
                    verticalAlignment = Alignment.CenterVertically,
                    horizontalArrangement = Arrangement.spacedBy(dim.headerLogoTitleSpacer),
                ) {
                    Image(
                        painter = rememberHeaderLogoPainter(),
                        contentDescription = "Air Canada",
                        modifier = Modifier
                            .size(dim.headerLogoSize)
                            .clip(CircleShape),
                        contentScale = ContentScale.Fit,
                    )
                    Row(
                        verticalAlignment = Alignment.CenterVertically,
                        horizontalArrangement = Arrangement.spacedBy(dim.headerTitleBetaSpacer),
                    ) {
                        Text(
                            text = ChatConstants.Strings.HEADER_TITLE,
                            style = HeaderTitleStyle,
                            color = onHeader,
                            maxLines = 1,
                        )
                        Box(
                            modifier = Modifier
                                .clip(RoundedCornerShape(dim.headerBetaPillRadius))
                                .background(
                                    if (isDark) HeaderBetaBadgePillBackgroundDark else Color.White,
                                )
                                .border(
                                    width = 1.5.dp,
                                    color = HeaderBetaBadgeBackground,
                                    shape = RoundedCornerShape(dim.headerBetaPillRadius),
                                )
                                .padding(
                                    horizontal = dim.headerBetaPillPaddingH,
                                    vertical = dim.headerBetaPillPaddingV,
                                ),
                        ) {
                            Text(
                                text = ChatConstants.Strings.BETA,
                                style = MaterialTheme.typography.labelMedium,
                                color = HeaderBetaBadgeBackground,
                            )
                        }
                    }
                }
            }

            IconButton(
                onClick = onMinimize,
                modifier = Modifier.size(48.dp),
                colors = IconButtonDefaults.iconButtonColors(
                    contentColor = onHeader,
                ),
            ) {
                Icon(
                    imageVector = Icons.Filled.ExpandMore,
                    contentDescription = "Expand",
                )
            }
        }

        // Row 2: Subtitle centered below the title (minimal gap from title row, inner padding bottom)
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .padding(
                    top = dim.headerTitleToSubtitleSpacer,
                    bottom = dim.headerContentPaddingBottom,
                ),
            contentAlignment = Alignment.TopCenter,
        ) {
            Text(
                text = subtitle,
                style = HeaderSubtitleStyle,
                color = subtitleColor,
                textAlign = TextAlign.Center,
            )
        }

        // Separator
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(dim.headerSeparatorHeight)
                .background(separatorColor),
        )
    }
}
