# Troubleshooting "Unresolved reference: ChatPoc"

## Step 1: Verify Dependency is Added

In your **app module's `build.gradle.kts`**, make sure you have:

```kotlin
dependencies {
    implementation("io.github.prasadpatil1508.chat_library_poc:chat-library-poc-android:1.0.0")
}
```

## Step 2: Verify Maven Local Repository

In your **`settings.gradle.kts`** (or root `build.gradle.kts`):

```kotlin
dependencyResolutionManagement {
    repositories {
        google()
        mavenCentral()
        mavenLocal()  // ← Must be present
    }
}
```

## Step 3: Sync Gradle

- **Android Studio**: Click **File → Sync Project with Gradle Files**
- Or run: `./gradlew build --refresh-dependencies`

## Step 4: Correct Import

In your Kotlin file where you use `ChatPoc`:

```kotlin
import com.example.chat_poc.ChatPoc
import com.example.chat_poc.showBottomSheet  // Extension function

// Then use it:
ChatPoc.showBottomSheet(activity)
```

**OR** import just the object and use the extension:

```kotlin
import com.example.chat_poc.ChatPoc

// Extension function is available if ChatPoc is imported
ChatPoc.showBottomSheet(activity)
```

## Step 5: Verify Library is Published

Check that the library exists in Maven Local:

```bash
ls -la ~/.m2/repository/io/github/prasadpatil1508/chat_library_poc/chat-library-poc-android/1.0.0/
```

You should see:
- `chat-library-poc-android-1.0.0.aar`
- `chat-library-poc-android-1.0.0.pom`
- `chat-library-poc-android-1.0.0.module`

## Step 6: Clean and Rebuild

If still not working:

1. **In your Android app project:**
   ```bash
   ./gradlew clean build --refresh-dependencies
   ```

2. **In the library project** (if you made changes):
   ```bash
   cd /path/to/chat-library-poc
   ./gradlew :shared:clean :shared:publishToMavenLocal
   ```

3. **Back in your Android app:**
   - File → Invalidate Caches / Restart
   - Sync Gradle again

## Step 7: Check Build Output

Look for errors in:
- **Build** tab in Android Studio
- **Gradle** sync output
- Check if you see: `--- io.github.prasadpatil1508.chat_library_poc:chat-library-poc-android:1.0.0 FAILED`

If you see "FAILED", the dependency isn't resolving. Check:
- `mavenLocal()` is in repositories
- Version matches what you published
- Library was published successfully

## Common Issues

**"Could not find io.github.prasadpatil1508.chat_library_poc:chat-library-poc-android:1.0.0"**
- `mavenLocal()` is missing from repositories
- Library wasn't published (run `publishToMavenLocal` again)
- Version mismatch

**"Unresolved reference: ChatPoc" (but dependency resolves)**
- Missing import: `import com.example.chat_poc.ChatPoc`
- Need to sync Gradle
- IDE cache issue (Invalidate Caches / Restart)

**"Unresolved reference: showBottomSheet"**
- Missing import: `import com.example.chat_poc.showBottomSheet`
- Or use: `ChatPoc.showBottomSheet(activity)` after importing `ChatPoc`

## Publishing: 422 Unprocessable Entity (GitHub Packages)

When `publishAndroidPublicationToGitHubPackagesRepository` fails with **422 Unprocessable Entity**:

1. **Version already published** – The version (e.g. `1.0.25`) was already pushed to GitHub Packages. Use a **new tag** (e.g. `v1.0.26`), push it, and run the workflow again. Do not re-run the workflow for the same tag if that version was already published.
2. **Check Packages** – Repo → **Packages** → see if `chat-library-poc-android` (or the repo package) already lists that version. If yes, you must use a new version.
3. **Same package from another repo** – If this `groupId:artifactId` was ever published from a different GitHub repo, delete the package from the wrong repo or use different coordinates. See [PUBLISHING.md](PUBLISHING.md) for 422 details.
