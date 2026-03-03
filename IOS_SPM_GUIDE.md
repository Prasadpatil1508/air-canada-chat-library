# iOS Swift Package Manager Guide (Private Repo)

This guide explains how the ChatSDK XCFramework is distributed to iOS apps via Swift Package Manager using a **path-based binary target** instead of a remote URL.

## Why path-based instead of URL-based?

The repository is **private**. GitHub Release asset URLs (used by `binaryTarget(url:checksum:)`) return **404** for unauthenticated requests, meaning SPM cannot download them automatically. By committing the `ChatSDK.xcframework` directly into this repo and using `binaryTarget(path:)`, SPM fetches it as part of the normal SSH clone — no separate download needed.

---

## Repository structure

```
air-canada-chat-library/
├── ChatSDK.xcframework/        ← XCFramework committed here (updated on each release)
├── Package.swift               ← Path-based SPM package (no URL, no checksum)
├── shared/                     ← KMP source code
└── ...
```

---

## For library maintainers: releasing a new version

### 1. Ensure SSH is configured in your local git

```bash
ssh -T git@github.com   # Should print: Hi <username>! You've successfully authenticated...
```

### 2. Build the XCFramework locally (optional – CI does this automatically)

```bash
cd /path/to/air-canada-chat-library
./gradlew :shared:assembleSharedReleaseXCFramework
```

Output: `shared/build/XCFrameworks/release/ChatSDK.xcframework`

### 3. Replace the existing framework and commit

```bash
rm -rf ChatSDK.xcframework
cp -R shared/build/XCFrameworks/release/ChatSDK.xcframework ChatSDK.xcframework
git add ChatSDK.xcframework
git commit -m "Update ChatSDK.xcframework to vX.Y.Z"
git push origin main
```

### 4. Create and push a Git tag

```bash
git tag vX.Y.Z
git push origin vX.Y.Z
```

Pushing the tag triggers the **CI workflow** (`publish.yml`) which:
- Builds the XCFramework
- Commits it to `main` (replacing the old one)
- Publishes the Android library to GitHub Packages
- Creates a GitHub Release
- Moves the tag to the updated commit (so the tag always points to the commit that includes the new framework)

---

## For iOS app developers: consuming the package

### Prerequisites

1. **SSH key tied to your GitHub account.**  
   If you don't have one:
   ```bash
   ssh-keygen -t ed25519 -C "your_email@example.com"
   # Then add ~/.ssh/id_ed25519.pub to GitHub → Settings → SSH and GPG keys
   ```
   Test it:
   ```bash
   ssh -T git@github.com
   ```

2. **Your GitHub account has read access** to `Prasadpatil1508/air-canada-chat-library`.

3. **Xcode account (optional but recommended):**  
   Xcode → Settings → Accounts → add your GitHub account. This helps Xcode resolve the SSH identity automatically.

---

### Adding the package in a Swift Package (Package.swift)

In your host app or package's `Package.swift`:

```swift
dependencies: [
    .package(url: "git@github.com:Prasadpatil1508/air-canada-chat-library.git", from: "1.0.40"),
],
```

> Use the **SSH URL** (`git@github.com:...`) not the HTTPS URL. SSH is what authenticates your access to the private repo.

Then add the product to your targets:

```swift
.target(name: "HomeTab", dependencies: [
    .product(name: "ChatSDK", package: "air-canada-chat-library"),
]),
```

---

### Adding the package in Xcode (no Package.swift)

1. **File** → **Add Package Dependencies…**
2. In the search field, enter the **SSH URL**:  
   `git@github.com:Prasadpatil1508/air-canada-chat-library.git`
3. Set the **Dependency Rule** (e.g. **Up to Next Major** from `1.0.40`, or **Exact Version**).
4. Click **Add Package**, then add **ChatSDK** to your app target.

---

### Clearing SPM cache (if you see stale package errors)

```bash
rm -rf ~/Library/Caches/org.swift.swiftpm
rm -rf ~/Library/Developer/Xcode/DerivedData
```

Then in Xcode: **File → Packages → Reset Package Caches**, then **Resolve Package Versions**.

---

## How it works end-to-end

```
Library maintainer pushes tag vX.Y.Z
         ↓
CI builds XCFramework
         ↓
CI commits ChatSDK.xcframework to main
         ↓
CI moves tag vX.Y.Z → new commit (with updated framework)
         ↓
iOS app developer adds package via SSH URL
         ↓
SPM clones the repo via SSH (authenticated)
         ↓
SPM reads Package.swift → binaryTarget(path: "ChatSDK.xcframework")
         ↓
Framework is used directly from the cloned repo — no separate download
```

No HTTPS asset download. No checksum. No 404.

---

## Using the library in code

After adding the package, `import ChatSDK` in your Swift file and present the chat:

```swift
import SwiftUI
import ChatSDK

struct ContentView: View {
    @State private var showChat = false

    var body: some View {
        Button("Open Chat") { showChat = true }
            .sheet(isPresented: $showChat) {
                ChatSheetView(isPresented: $showChat)
            }
    }
}

struct ChatSheetView: UIViewControllerRepresentable {
    @Binding var isPresented: Bool

    func makeUIViewController(context: Context) -> UIViewController {
        let config = ChatPoc_iosKt.defaultChatLibraryConfig()
        let vc = ChatPoc_iosKt.createBottomSheetViewController(config: config, callbacks: nil)
        ChatPoc_iosKt.setBottomSheetDismissHandler { isPresented = false }
        return vc
    }

    func updateUIViewController(_ uiViewController: UIViewController, context: Context) {}
}
```

See `iosApp/USING_LIBRARY_IN_FINAL_IOS_APP.md` for full usage documentation.
