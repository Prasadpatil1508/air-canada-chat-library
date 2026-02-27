# Step-by-step: Use the Chat Library in your final iOS app

This guide walks you through using the **deployed** Chat Library (ChatSDK) in a **real iOS app** (SwiftUI or UIKit). You use the library from a **GitHub Release** (or Swift Package Manager), not from source.

---

## Prerequisites

- **Mac** with Xcode installed.
- **Your iOS app** (new or existing) — SwiftUI or UIKit.
- **Deployed library** — The Chat SDK must be published to a **GitHub Release** with an XCFramework zip (see [PUBLISHING.md](../PUBLISHING.md) for how maintainers publish). Replace `YOUR_GITHUB_OWNER` and the repo name (e.g. `air-canada-chat-library`) with your actual GitHub owner and repository.

---

## Step 1: Get the ChatSDK from the deployed library

Use the **published** XCFramework from a GitHub Release. You do **not** need the library source code.

### Option A — Download from a GitHub Release (recommended)

1. Open the library’s **Releases** page:
   - **URL:** `https://github.com/YOUR_GITHUB_OWNER/air-canada-chat-library/releases`  
   - Replace `YOUR_GITHUB_OWNER` with the GitHub user or org that publishes the library (e.g. your org or username).

2. Pick the **release** you want (e.g. `v1.0.0`) and in **Assets** download **`ChatSDK.xcframework.zip`**.

3. **Direct download URL** (for a specific version):
   ```
   https://github.com/YOUR_GITHUB_OWNER/air-canada-chat-library/releases/download/v1.0.0/ChatSDK.xcframework.zip
   ```
   Replace `v1.0.0` with the release tag you need.

4. **Unzip** the file. You should get a folder named **`ChatSDK.xcframework`**.

5. Move or copy that folder to a place you’ll use in Xcode (e.g. inside your app project directory or a `Frameworks` folder). You will add this folder in Step 2.

### Option B — Swift Package Manager (recommended for deployed library)

Use this when the library repo has a `Package.swift` that points at the XCFramework zip from a GitHub Release. No download or manual framework add needed; Xcode fetches and links the binary for you.

**Requirements:** A GitHub Release must exist with the asset `ChatSDK.xcframework.zip`, and the repo's `Package.swift` must use that release's URL and the correct **checksum** (see repo root `Package.swift` and [PUBLISHING.md](../PUBLISHING.md)).

**Steps:**

1. Open your **iOS app** in **Xcode**.
2. **File** → **Add Package Dependencies…**
3. In the search field, enter the **repository URL** of the chat library, e.g. `https://github.com/Prasadpatil1508/air-canada-chat-library` (replace with your org/user and repo name if different).
4. Set **Dependency Rule** (e.g. “Up to Next Major” with `1.0.0`, or **Exact Version**).
5. Click **Add Package**.
6. When the package list appears, ensure **ChatSDK** is checked and that it is added to your **app target**. Click **Add Package**.
7. Xcode will resolve the package and download the XCFramework from the release. You do **not** need to add the framework manually; **skip Step 2** and go to **Step 3** (Use the library in code).

**When your host app is a Swift package (e.g. AirCanadaMobileFeatures):** Add the dependency and product in your **Package.swift** instead of using Xcode’s Add Package UI. Use these exact names:

- **Package URL:** `https://github.com/Prasadpatil1508/air-canada-chat-library`
- **Package identity** (for `package:` in `.product`): **`air-canada-chat-library`** (from the repo name in the URL).
- **Product name:** **`ChatSDK`** (not `shared` — the library exposes one product named `ChatSDK`).

Example — in your *Package.swift* (e.g. AirCanadaMobileFeatures):

```swift
dependencies: [
    // ...
    .package(url: "https://github.com/Prasadpatil1508/air-canada-chat-library", from: "1.0.31"),
],
```

Then add the **ChatSDK** product to each target that uses the chat library:

```swift
.target(name: "HomeTab", dependencies: [
    // ... existing deps ...
    .product(name: "ChatSDK", package: "air-canada-chat-library"),
], ...),
.target(name: "ChatSupport", dependencies: [
    // ... existing deps ...
    .product(name: "ChatSDK", package: "air-canada-chat-library"),
], ...),
```

Use **`ChatSDK`** as the product name and **`air-canada-chat-library`** as the package name. Do **not** use `"shared"` — that was an old internal name; the published product is **ChatSDK**.

### Option C — Build locally (only if you have the repo and need changes)

Use this only if you **don’t** use the deployed library and need to build from source (e.g. custom config or debugging):

1. In Terminal, go to the **library repo root** (folder that contains `shared/`, `iosApp/`, etc.):
   ```bash
   cd /path/to/air-canada-chat-library
   ```
2. Build the XCFramework:
   ```bash
   ./gradlew :shared:assembleSharedReleaseXCFramework
   ```
3. The framework is at: `shared/build/XCFrameworks/release/ChatSDK.xcframework`. Use this folder in Step 2.

---

## Step 2: Add the framework to your Xcode project

**If you used Swift Package Manager (Step 1 Option B),** the framework is already linked — skip to Step 3.

**If you downloaded the zip (Step 1 Option A) or built locally (Option C):**

1. Open your **iOS app** in **Xcode** (File → Open → select your `.xcodeproj` or `.xcworkspace`).
2. In the **Project Navigator**, select your **app target** (the one that builds the final app).
3. Open the **General** tab.
4. Scroll to **Frameworks, Libraries, and Embedded Content**.
5. Click the **+** button.
6. Choose **Add Other…** → **Add Files…**.
7. In the file picker, select the **ChatSDK.xcframework** folder (the one you unzipped from the release, or from `shared/build/XCFrameworks/release/` if you built locally).
8. Click **Add**.
9. In the list, find **ChatSDK.xcframework** and set its **Embed** option to **Embed & Sign**.

Your app target now links and embeds the deployed Chat SDK. You do **not** need to add any other frameworks manually for the chat UI.

---

## Step 3: Use the library in code

You **import the module** and then **create and present** the chat view controller. The library exposes:

- **`ChatPoc_iosKt.createBottomSheetViewController(...)`** — returns a `UIViewController` that shows the chat bottom sheet.
- **`ChatPoc_iosKt.setBottomSheetDismissHandler { ... }`** — so when the user dismisses the sheet (e.g. by swiping down), your app can close the presented VC.
- **`ChatPoc_iosKt.defaultChatLibraryConfig()`** — returns a default config when you use the config-based API (Swift doesn’t see Kotlin default parameters).

You can use either **SwiftUI** or **UIKit**. Both are described below.

---

### 3a. SwiftUI — present the chat as a sheet

1. In the Swift file where you want to open chat (e.g. your main `ContentView` or a settings screen):
   - Add `import ChatSDK`.
   - Add a `@State` (or equivalent) to control whether the sheet is shown, e.g. `@State private var showChat = false`.

2. Add a **button** (or any trigger) that sets that state to `true`, e.g.:

   ```swift
   Button("Open Chat") {
       showChat = true
   }
   ```

3. Attach a **sheet** to that view, and in the sheet content create the chat view controller with a **UIViewControllerRepresentable**:

   **Minimal example (default config, no callbacks):**

   ```swift
   import SwiftUI
   import ChatSDK

   struct ContentView: View {
       @State private var showChat = false

       var body: some View {
           Button("Open Chat") {
               showChat = true
           }
           .frame(maxWidth: .infinity, maxHeight: .infinity)
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
           ChatPoc_iosKt.setBottomSheetDismissHandler {
               isPresented = false
           }
           return vc
       }

       func updateUIViewController(_ uiViewController: UIViewController, context: Context) {}
   }
   ```

   When the user swipes to dismiss the sheet, `setBottomSheetDismissHandler` runs and sets `isPresented = false`, so the sheet closes.

4. **Optional — custom title, auth token, and callbacks (Swift-friendly overload):**

   If you want to pass a **title**, **auth token**, and **callbacks** (e.g. button tap, data from library) without building a Kotlin `ChatLibraryConfig` from Swift, use the overload that takes primitives and closures:

   ```swift
   let vc = ChatPoc_iosKt.createBottomSheetViewController(
       title: "Support Chat",
       messages: [],           // Prefer not to pass custom list from Swift (K/N interop); library uses defaults
       authToken: "Bearer YOUR_TOKEN",
       onActionButtonClicked: {
           // User tapped the action button in the sheet
       },
       onDataToHost: { data in
           // Library sent a string (e.g. token, payload)
           print("Received from library: \(data)")
       }
   )
   ```

   Then present this `vc` the same way (e.g. inside your `ChatSheetView`).

---

### 3b. UIKit — present the chat modally

1. In the view controller where you want to open chat:
   - Add `import ChatSDK`.

2. When the user taps your button (or any trigger), create the chat VC and set the dismiss handler **before** presenting:

   ```swift
   import UIKit
   import ChatSDK

   class YourViewController: UIViewController {

       @IBAction func openChatTapped(_ sender: Any) {
           let config = ChatPoc_iosKt.defaultChatLibraryConfig()
           let vc = ChatPoc_iosKt.createBottomSheetViewController(config: config, callbacks: nil)

           ChatPoc_iosKt.setBottomSheetDismissHandler { [weak vc] in
               vc?.dismiss(animated: true)
           }

           vc.modalPresentationStyle = .pageSheet   // or .formSheet, etc.
           present(vc, animated: true)
       }
   }
   ```

   When the user dismisses the bottom sheet from inside (e.g. drag handle), the dismiss handler runs and you dismiss the view controller.

3. **Optional — custom title and callbacks:**  
   Same as in SwiftUI: you can use the Swift-friendly overload with `title`, `messages`, `authToken`, `onActionButtonClicked`, and `onDataToHost` if you need them.

---

## Step 4: What the library needs from the host (summary)

| Item | Who provides it | Where |
|------|------------------|--------|
| **Framework** | You (build or download) | Step 1–2: add `ChatSDK.xcframework` and set **Embed & Sign**. |
| **Presentation** | Your app | Step 3: present the `UIViewController` from `createBottomSheetViewController(...)` as a modal/sheet. |
| **Dismiss behavior** | Your app | Call `setBottomSheetDismissHandler { ... }` before presenting so the sheet can close (e.g. set `isPresented = false` in SwiftUI or `vc?.dismiss(animated: true)` in UIKit). |
| **Config (title, auth, etc.)** | Optional | Use `defaultChatLibraryConfig()` or the Swift overload with `title` / `authToken`; or pass a custom `ChatLibraryConfig` if your framework exposes it. |
| **Callbacks** | Optional | Pass `callbacks:` (config API) or use the overload with `onActionButtonClicked` / `onDataToHost`. |

---

## Step 5: Backend / start-chat API (deployed library)

When you use the **deployed** library (from a GitHub Release), the **Connect/start-chat API** (URLs, region, etc.) is already baked into that release. Your **final iOS app** does not configure these; it just uses the XCFramework from the release. To change API endpoints or keys, the **library maintainers** must rebuild and publish a new release; your app then updates by downloading the new XCFramework (or new SPM version) and re-adding it. See the library repo’s [PUBLISHING.md](../PUBLISHING.md) and [ENV.md](../ENV.md) for how releases are built.

---

## Step 6: Optional — ProMotion (high refresh rate)

For smoother animation on ProMotion iPhones, you can add to your app’s **Info.plist**:

- Key: **`CADisableMinimumFrameDurationOnPhone`**
- Type: **Boolean**
- Value: **YES**

The chat sheet works without this; add it only if you want to optimize for high refresh rate.

---

## Checklist (quick reference)

- [ ] **Deployed library:** XCFramework downloaded from GitHub Release (or added via SPM). No need to clone or build the library repo.
- [ ] In Xcode: app target → **General** → **Frameworks, Libraries, and Embedded Content** → **+** → added **ChatSDK.xcframework** → **Embed** set to **Embed & Sign** (or SPM added the package).
- [ ] In code: `import ChatSDK`; create VC with `ChatPoc_iosKt.createBottomSheetViewController(...)`; present it as a sheet/modal.
- [ ] Called `ChatPoc_iosKt.setBottomSheetDismissHandler { ... }` before presenting so the sheet can close when the user dismisses it.
- [ ] (Optional) Passed custom config or used the Swift overload with title/auth/callbacks.
- [ ] (Optional) Added `CADisableMinimumFrameDurationOnPhone` to Info.plist for ProMotion.

After this, the **deployed** chat library is integrated into your final iOS app; opening chat is just triggering the button (or your flow) that presents the view controller from `createBottomSheetViewController`.
