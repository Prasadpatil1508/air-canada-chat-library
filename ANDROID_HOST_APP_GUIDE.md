# Android Host App Guide — Chat Library

This guide explains how to add and use the **Chat Library** in your Android app. The library is published to **GitHub Packages** (Maven). Follow the steps below to integrate it.

---

## Requirements

- **Android**: minSdk 24+, Compose
- **Gradle**: Kotlin DSL (`build.gradle.kts`) — the snippets below use Kotlin DSL
- Your Activity that shows the chat must be (or extend) **`ComponentActivity`**

---

## Step 1: Add the GitHub Packages repository

Your app must resolve the library from GitHub Packages. **Prefer Option A** (settings.gradle.kts). Use Option B only if your project does not use `dependencyResolutionManagement` in settings.

### Option A — `settings.gradle.kts` (preferred)

In your project root **`settings.gradle.kts`**, inside `dependencyResolutionManagement { repositories { ... } }`:

```kotlin
dependencyResolutionManagement {
    repositories {
        google()
        mavenCentral()
        maven {
            url = uri("https://maven.pkg.github.com/Prasadpatil1508/air-canada-chat-library")
            credentials {
                username = providers.gradleProperty("gpr.user").getOrElse(System.getenv("GITHUB_ACTOR") ?: "")
                password = providers.gradleProperty("gpr.token").getOrElse(System.getenv("GITHUB_TOKEN") ?: "")
            }
        }
    }
}
```

### Option B — Root `build.gradle.kts`

If your project declares repositories in the root **`build.gradle.kts`** instead:

```kotlin
repositories {
    google()
    mavenCentral()
    maven {
        url = uri("https://maven.pkg.github.com/Prasadpatil1508/air-canada-chat-library")
        credentials {
            username = project.findProperty("gpr.user")?.toString() ?: System.getenv("GITHUB_ACTOR") ?: ""
            password = project.findProperty("gpr.token")?.toString() ?: System.getenv("GITHUB_TOKEN") ?: ""
        }
    }
}
```

---

## Step 2: Add the dependency

In your **app** module’s **`build.gradle.kts`**, add the library dependency. The current published version is **1.0.31** (use the release tag without the `v`).

```kotlin
dependencies {
    implementation("io.github.prasadpatil1508.air_canada_chat_library:chat-library-poc-android:1.0.31")
}
```

For a different version, replace `1.0.31` with the tag (e.g. `v1.0.32` → `1.0.32`).

---

## Step 3: Provide credentials (GitHub Packages auth)

GitHub Packages requires authentication. Use **one** of the following.

### Local development — `gradle.properties`

Use the **user-level** `gradle.properties` in your home directory (not inside the project), so credentials are not committed.

**1. Create the file if it doesn’t exist and open it**

- **macOS / Linux (Terminal):**
  ```bash
  mkdir -p ~/.gradle
  touch ~/.gradle/gradle.properties
  open ~/.gradle/gradle.properties
  ```
  (Use `xdg-open ~/.gradle/gradle.properties` on Linux if `open` is not available.)

- **Windows (Command Prompt or PowerShell):**
  ```cmd
  mkdir %USERPROFILE%\.gradle 2>nul
  notepad %USERPROFILE%\.gradle\gradle.properties
  ```
  Create the file when Notepad prompts “Do you want to create a new file?”.

**2. Add these lines:**

```properties
gpr.user=YOUR_GITHUB_USERNAME
gpr.token=YOUR_GITHUB_PERSONAL_ACCESS_TOKEN
```

Use the **username** and **Personal Access Token** of a **GitHub account that has access to this library** (i.e. can read the repo and its GitHub Package). For a private repo, that account must be a member or have been granted access. For a public repo, any GitHub account with a token that has **`read:packages`** can resolve the dependency. Create a token at [GitHub → Settings → Developer settings → Personal access tokens](https://github.com/settings/tokens) with at least **`read:packages`**.

**Security:** Do not commit real tokens. Keep this file only in `~/.gradle/` (or `%USERPROFILE%\.gradle\` on Windows). If you ever copy it into a project, add it to `.gitignore`.

### CI / automated builds

Set environment variables so Gradle can resolve the repo:

- **`GITHUB_ACTOR`** — your GitHub username  
- **`GITHUB_TOKEN`** — a token with `read:packages` (e.g. `secrets.GITHUB_TOKEN` in GitHub Actions)

The repository block in Step 1 already falls back to these when `gpr.user` / `gpr.token` are not set.

---

## Step 4: Sync Gradle

- In Android Studio: **File → Sync Project with Gradle Files**, or click **Sync Now** in the toolbar.
- Resolve any errors (wrong version, missing credentials, or repo URL) before continuing.

---

## Step 5: Use the library in code

The library exposes a **bottom sheet** UI. You show it from a **`ComponentActivity`** — for example your **MainActivity**, a **SupportActivity**, or any dedicated screen (e.g. “Open Chat” screen). Call **`ChatPoc.showBottomSheet(activity)`** from that Activity or from a Composable that has access to the Activity (e.g. via `LocalActivity.current`).

### Where to call the library

- **MainActivity** — Add a button (or menu item) that opens the chat; keep the call in `onClick` or in a Composable that receives the Activity.
- **Other screen (e.g. SupportActivity)** — Same pattern: from a `ComponentActivity`, call `ChatPoc.showBottomSheet(this@SupportActivity)` when the user taps “Chat” (or from a Composable with `LocalActivity.current`).
- **Dedicated “chat entry” screen** — Use a single screen whose only job is to show the chat button and open the bottom sheet; call `showBottomSheet` from that Activity or its Composables.

The example below uses **MainActivity** and a Composable that gets the Activity via **`LocalActivity.current`**, so the “Open Chat” button can live in any Compose hierarchy (e.g. inside a `Scaffold`).

### Full example (MainActivity + Compose with LocalActivity)

```kotlin
package com.example.chat_app_android_github

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.activity.compose.LocalActivity
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Button
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.example.chat_app_android_github.ui.theme.ChatappandroidgithubTheme
import com.example.chat_poc.ChatPoc
import com.example.chat_poc.showBottomSheet

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            ChatappandroidgithubTheme {
                Scaffold(modifier = Modifier.fillMaxSize()) { innerPadding ->
                    Greeting(
                        name = "Android",
                        modifier = Modifier.padding(innerPadding)
                    )
                }
            }
        }
    }
}

@Composable
fun Greeting(name: String, modifier: Modifier = Modifier) {
    val activity = LocalActivity.current
    Column(
        modifier = modifier.fillMaxSize(),
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Text(text = "Hello $name!")
        Button(
            onClick = {
                activity?.let { ChatPoc.showBottomSheet(it as ComponentActivity) }
            }
        ) {
            Text("Open Chat")
        }
    }
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    ChatappandroidgithubTheme {
        Greeting("Android")
    }
}
```

- **MainActivity** sets the theme and a `Scaffold`; the content is **Greeting**, which has the “Open Chat” button.
- **Greeting** uses **`LocalActivity.current`** to get the host Activity and calls **`ChatPoc.showBottomSheet(it as ComponentActivity)`** in the button’s `onClick`. This works from any Composable that is composed inside a `ComponentActivity`.
- To open chat from **another Activity** (e.g. SupportActivity), use the same call: `ChatPoc.showBottomSheet(this@SupportActivity)` from that Activity, or pass the Activity into your Composable and use it in `onClick`.

### Optional: custom config and callbacks

For a custom title, auth token, or messages, use **`ChatLibraryConfig`**. To handle the action button or data from the library, use **`ChatLibraryCallbacks`**:

```kotlin
import com.example.chat_poc.ChatLibraryCallbacks
import com.example.chat_poc.ChatLibraryConfig

// In your onClick:
val config = ChatLibraryConfig(
    authToken = "Bearer YOUR_AUTH_TOKEN",
    displayTitle = "Support Chat",
    displayMessages = listOf("Hello", "From host app")
)
val callbacks = object : ChatLibraryCallbacks {
    override fun onActionButtonClicked() { /* handle */ }
    override fun onDataToHost(data: String) { /* e.g. "connected", "error:..." */ }
}
ChatPoc.showBottomSheet(activity, config, callbacks)
```

---

## API summary

| Item | Description |
|------|-------------|
| **`ChatPoc.showBottomSheet(activity, config, callbacks)`** | Shows the chat bottom sheet. `config` and `callbacks` are optional (defaults used if omitted). |
| **`ChatLibraryConfig`** | `authToken`, `displayTitle`, `displayMessages`. Pass from host into the library. |
| **`ChatLibraryCallbacks`** | `onActionButtonClicked()`, `onDataToHost(data: String)`. Implement to receive events from the library. |

---

## Troubleshooting

### 401 Unauthorized (and "Unresolved reference 'ChatPoc'")

If you see **401 Unauthorized** when resolving the dependency, Gradle never downloads the library, so you also get **Unresolved reference 'ChatPoc'** (and other library classes). Fix the 401 first; then sync and rebuild.

**1. Check credentials are read by Gradle**

- **User-level (recommended):** Ensure **`~/.gradle/gradle.properties`** exists and contains:
  ```properties
  gpr.user=YOUR_GITHUB_USERNAME
  gpr.token=YOUR_GITHUB_PERSONAL_ACCESS_TOKEN
  ```
  No quotes, no spaces around `=`. Restart Android Studio / invalidate caches and sync again.

- **If 401 persists:** Try **project-level** credentials so Gradle definitely sees them. In your **host app project root** (same folder as `settings.gradle.kts`), create or edit **`gradle.properties`** and add:
  ```properties
  gpr.user=YOUR_GITHUB_USERNAME
  gpr.token=YOUR_GITHUB_PERSONAL_ACCESS_TOKEN
  ```
  **Important:** Add **`gradle.properties`** to **`.gitignore`** so you never commit the token. Then **File → Sync Project with Gradle Files** (or **Sync Now**).

**2. Check the token**

- Create a **new** [Personal Access Token](https://github.com/settings/tokens) (Classic).
- Under **Scopes**, enable **`read:packages`**. For a **private** repo, also enable **`repo`**.
- Use that token as `gpr.token` (copy-paste with no extra spaces).

**3. Check the account has access**

- `gpr.user` must be the GitHub **username** of an account that can access the library repo (member/collaborator for private repos).
- Test in a browser: log in as that user and open `https://github.com/Prasadpatil1508/air-canada-chat-library` — you must be able to see the repo.

**4. After fixing 401**

- **File → Invalidate Caches → Invalidate and Restart** (or at least **File → Sync Project with Gradle Files**).
- **Build → Clean Project**, then **Build → Rebuild Project**. The "Unresolved reference 'ChatPoc'" error should go away once the dependency resolves.

---

### Other issues

| Issue | What to do |
|--------|-------------|
| **Could not find … chat-library-poc-android:VERSION** | 1) Repo URL exactly `https://maven.pkg.github.com/Prasadpatil1508/air-canada-chat-library`. 2) Version exists (e.g. tag `v1.0.31` → use `1.0.31`). 3) `gpr.user` / `gpr.token` set (see 401 section above). |
| **No such method / Unresolved reference (after sync succeeds)** | Ensure the dependency is on the **app** target. Clean and rebuild. |
| **Class not found / crash at runtime** | Call `showBottomSheet` from a **`ComponentActivity`** (or subclass). |

---

## Where to find published versions

- **Releases:** [https://github.com/Prasadpatil1508/air-canada-chat-library/releases](https://github.com/Prasadpatil1508/air-canada-chat-library/releases)  
- Use the **tag** version without the `v` (e.g. tag `v1.0.31` → dependency version `1.0.31`).

---

## Quick reference

- **Maven repo URL:** `https://maven.pkg.github.com/Prasadpatil1508/air-canada-chat-library`
- **Dependency:** `io.github.prasadpatil1508.air_canada_chat_library:chat-library-poc-android:1.0.31`
- **Credentials:** `gpr.user=Prasadpatil1508` and `gpr.token=<your token>` in `~/.gradle/gradle.properties` (or `GITHUB_ACTOR` + `GITHUB_TOKEN` in CI)
