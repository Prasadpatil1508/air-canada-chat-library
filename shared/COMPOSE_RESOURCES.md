# Shared resources (Android + iOS)

Images and other assets used by the chat library live in **`shared/src/commonMain/composeResources/`** so they work on both Android and iOS.

> **Note:** Only these folders are allowed inside `composeResources`: `drawable`, `drawable-xhdpi`, `drawable-xxhdpi`, `font`, `values`, and `files`. Do not put other files (e.g. README) there or the resource generator will fail.

## Where to put images

- **Images:** `drawable/` (base), `drawable-xhdpi/` (@2x), `drawable-xxhdpi/` (@3x)  
  Put PNG, JPEG, WebP, or BMP here. Use **lowercase names with underscores** (e.g. `ai_avatar.png`) so the generated `Res` accessors are valid.  
  For each image used in code, **add the same file to all three folders** (drawable, drawable-xhdpi, drawable-xxhdpi). Otherwise on xxhdpi/xhdpi devices you get `MissingResourceException` because the runtime looks for the density-specific path first.

- **Other:**  
  - Fonts → `font/`  
  - Strings → `values/`  
  - Other files → `files/`

## Current drawables

| Resource name in code | Description |
|-----------------------|-------------|
| `Res.drawable.ai_avatar` | AI/bot avatar |
| `Res.drawable.customer_avatar` | Customer/user avatar |
| `Res.drawable.header_logo` | Header logo |

**Keep density variants.** Each drawable used in code must exist in **all three** folders (`drawable/`, `drawable-xhdpi/`, `drawable-xxhdpi/`). Otherwise the runtime looks for e.g. `drawable-xxhdpi/header_logo.png` on xxhdpi devices and throws `MissingResourceException` if it's missing.

If the **host app** that consumes this library gets `MissingResourceException` for paths like `drawable-xhdpi/header_logo.png`, the host app is not packaging the library’s Compose resources. Ensure the host app depends on `compose.components.resources` and that the library AAR is up to date so its resources are merged into the APK.

## Using images in code

1. Add your image to `drawable/` (e.g. `drawable/ic_chat.png`) with a valid name (lowercase, underscores).
2. Sync/build the project so the `Res` class is generated.
3. In common Compose code:

```kotlin
import org.jetbrains.compose.resources.painterResource
import com.example.chat_poc.shared.generated.resources.Res

Image(
    painter = painterResource(Res.drawable.ai_avatar),
    contentDescription = "AI avatar",
    modifier = Modifier.size(24.dp)
)
```

File names with hyphens become underscores in code (e.g. `ic-chat.png` → `Res.drawable.ic_chat`).
