# Use the Chat Library in Your Android App (from GitHub)

After the library is published to GitHub (tag e.g. `v1.0.0`), add it to your Android app as follows.

---

## 1. Add the GitHub Packages repository

In your app’s **root** `settings.gradle.kts` (under `dependencyResolutionManagement { repositories { ... } }`):

```kotlin
dependencyResolutionManagement {
    repositories {
        google()
        mavenCentral()
        maven {
            url = uri("https://maven.pkg.github.com/Prasadpatil1508/chat-library-poc")
            credentials {
                username = providers.gradleProperty("gpr.user").getOrElse(System.getenv("GITHUB_ACTOR") ?: "")
                password = providers.gradleProperty("gpr.token").getOrElse(System.getenv("GITHUB_TOKEN") ?: "")
            }
        }
    }
}
```

If your project uses the root `build.gradle.kts` for repositories instead:

```kotlin
repositories {
    google()
    mavenCentral()
    maven {
        url = uri("https://maven.pkg.github.com/Prasadpatil1508/chat-library-poc")
        credentials {
            username = project.findProperty("gpr.user")?.toString() ?: System.getenv("GITHUB_ACTOR") ?: ""
            password = project.findProperty("gpr.token")?.toString() ?: System.getenv("GITHUB_TOKEN") ?: ""
        }
    }
}
```

---

## 2. Add the dependency

In your **app** module’s `build.gradle.kts`:

```kotlin
dependencies {
    implementation("io.github.prasadpatil1508.chat_library_poc:chat-library-poc-android:1.0.0")
}
```

Use the **version you published** (tag without `v`: e.g. `v1.0.0` → `1.0.0`).

---

## 3. Provide credentials

GitHub Packages requires a token with **read:packages**.

**Local development:** add to `~/.gradle/gradle.properties`:

```properties
gpr.user=Prasadpatil1508
gpr.token=YOUR_GITHUB_PERSONAL_ACCESS_TOKEN
```

Create a token at: GitHub → Settings → Developer settings → Personal access tokens → **read:packages**.

**CI:** set environment variables `GITHUB_ACTOR` and `GITHUB_TOKEN` (or `gpr.user` and `gpr.token`).

---

## 4. Sync and use in code

Your Activity must be (or extend) **`ComponentActivity`**. Example with config and callbacks:

```kotlin
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import com.example.chat_poc.ChatLibraryCallbacks
import com.example.chat_poc.ChatLibraryConfig
import com.example.chat_poc.ChatPoc
import com.example.chat_poc.showBottomSheet

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            Box(Modifier.fillMaxSize(), contentAlignment = Alignment.Center) {
                Button(
                    onClick = {
                        val config = ChatLibraryConfig(
                            authToken = "Bearer YOUR_TOKEN",
                            displayTitle = "My Chat",
                            displayMessages = listOf("Hello", "From host")
                        )
                        val callbacks = object : ChatLibraryCallbacks {
                            override fun onActionButtonClicked() { /* handle */ }
                            override fun onDataToHost(data: String) {
                                // e.g. token, "connected", or "error:..."
                            }
                        }
                        ChatPoc.showBottomSheet(this@MainActivity, config, callbacks)
                    }
                ) {
                    Text("Open Chat")
                }
            }
        }
    }
}
```

**Minimal (defaults):**

```kotlin
ChatPoc.showBottomSheet(this@MainActivity)
```

---

## Troubleshooting

- **Could not find io.github.prasadpatil1508.chat_library_poc:chat-library-poc-android:1.0.0**  
  Check: repo URL is correct, version matches a published tag, and `gpr.user` / `gpr.token` (or env) are set.

- **401 Unauthorized**  
  Token must have `read:packages` and the user must have access to the repo (or the package is public).

- Full details: [androidApp/README.md](README.md) and [TROUBLESHOOTING.md](../TROUBLESHOOTING.md).
