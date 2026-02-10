# Use the Chat Library in Your iOS App (from GitHub)

After the library is published to a GitHub Release (e.g. tag `v1.0.0`), add it to your iOS app using one of the options below.

---

## Option A: Swift Package Manager (recommended)

1. In **Xcode**: **File** → **Add Package Dependencies…**
2. Enter the repo URL:
   ```
   https://github.com/Prasadpatil1508/chat-library-poc
   ```
3. Set **Dependency Rule** to “Up to Next Major Version” (e.g. `1.0.0`) or “Exact Version” and pick a version that has a published release (do not use Branch).
4. Click **Add Package**, select the **ChatSDK** product, add it to your app target, then **Add Package**.

Xcode will fetch the XCFramework from the release URL in `Package.swift`.  
**Note:** After the first release, the library’s `Package.swift` must point at that release’s zip URL and checksum. If you get a checksum error, the maintainer needs to update `Package.swift` with the correct checksum for that release.

---

## Option B: Manual download from GitHub Release

1. Open: **https://github.com/Prasadpatil1508/chat-library-poc/releases**
2. Open the release you want (e.g. **v1.0.0**).
3. Download **ChatSDK.xcframework.zip** from the assets.
4. Unzip it (e.g. in Downloads).
5. In **Xcode**:
   - Select your **app target** → **General** → **Frameworks, Libraries, and Embedded Content**.
   - Click **+** → **Add Other…** → **Add Files…**.
   - Select the unzipped **ChatSDK.xcframework** folder.
   - Set **Embed** to **Embed & Sign**.

---

## Use the library in code

1. In any Swift file that uses the chat:
   ```swift
   import ChatSDK
   ```

2. **SwiftUI** — present the chat in a sheet:

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
            ChatSheetView(
                onDismissRequested: { showChat = false },
                onActionButtonClicked: nil,
                onDataToHost: nil
            )
        }
    }
}

struct ChatSheetView: UIViewControllerRepresentable {
    var onDismissRequested: () -> Void
    var onActionButtonClicked: (() -> Void)?
    var onDataToHost: ((String) -> Void)?

    func makeUIViewController(context: Context) -> UIViewController {
        let vc = ChatPoc_iosKt.createBottomSheetViewController(
            title: "My Chat",
            messages: ["Hello", "From host"],
            authToken: "Bearer xxx",
            onActionButtonClicked: onActionButtonClicked,
            onDataToHost: onDataToHost
        )
        ChatPoc_iosKt.setBottomSheetDismissHandler {
            onDismissRequested()
        }
        return vc
    }

    func updateUIViewController(_ uiViewController: UIViewController, context: Context) {}
}
```

3. **UIKit** — present the view controller:

```swift
import UIKit
import ChatSDK

// When the user taps your button:
let vc = ChatPoc_iosKt.createBottomSheetViewController(
    title: "My Chat",
    messages: ["Hello", "From host"],
    authToken: "Bearer xxx",
    onActionButtonClicked: nil,
    onDataToHost: nil
)
ChatPoc_iosKt.setBottomSheetDismissHandler { [weak vc] in
    vc?.dismiss(animated: true)
}
vc.modalPresentationStyle = .pageSheet
present(vc, animated: true)
```

---

## Requirements

- **iOS 14+**
- Present the view controller from the library as a **modal or sheet** (as in the examples above).

---

## Troubleshooting

- **404 / wrong URL (e.g. downloads v1.0.0 when you picked 1.0.28)** — SPM uses the **Package.swift from the git tag** you selected. If tag **v1.0.28** was created from an older commit (before Package.swift was updated to use v1.0.28 in the URL), that tag’s Package.swift still points at the old URL (e.g. v1.0.0). **Fix in the library repo:** move the tag to the commit that has the correct Package.swift, then push the tag so the publish workflow runs and uploads the zip. See “Tag points to wrong Package.swift” below.

- **Tag points to wrong Package.swift** — In the **library repo** (chat-library-poc), from the commit that has Package.swift with the right URL (e.g. v1.0.28), run:
  ```bash
  git tag -d v1.0.28
  git tag v1.0.28
  git push origin :refs/tags/v1.0.28
  git push origin v1.0.28
  ```
  (Use the same tag name you use for releases, e.g. `v1.0.28`.) Then re-run the Publish workflow for that tag so the release gets **ChatSDK.xcframework.zip**. After that, the host app can resolve version 1.0.28 and get the correct zip URL.

- **404 / release has no zip** — The release for that version doesn’t have **ChatSDK.xcframework.zip**. Check https://github.com/Prasadpatil1508/chat-library-poc/releases and ensure the release lists the zip. The publish workflow must complete (Android + XCFramework upload) for that tag.

- **Wrong branch (e.g. "requirement: hosting/github")** — You added the package with a **Branch** rule. Remove the package and add again with **"Up to Next Major Version"** or **"Exact Version"**, not a branch.

- **"Unable to load the Read Me" in Add Package dialog** — Xcode loads the README from the repo’s **default branch**. Set the default branch (GitHub → repo → Settings → General → Default branch) to the branch that has your README and Package.swift (e.g. `hosting/github` or `main`). Then try adding the package again.

- **"unexpectedly did not find the new dependency in the package graph"** — Often the binary download fails (404 or checksum). (1) Confirm the release has **ChatSDK.xcframework.zip** at https://github.com/Prasadpatil1508/chat-library-poc/releases . (2) Set the repo’s **default branch** to the branch with the correct Package.swift (see above). (3) From the library repo, run `./scripts/test-spm-resolve.sh` to see the real resolve error in Terminal.

- **No such module 'ChatSDK'**  
  Ensure ChatSDK is added to your app target (SPM: add the package to the target; manual: framework under **Frameworks, Libraries, and Embedded Content** with **Embed & Sign**). Clean build folder and build again.

- **Checksum mismatch (SPM)**  
  The repo’s `Package.swift` must point at the release zip and its correct checksum. Use the same release version in Xcode as in `Package.swift`, or use Option B (manual download).

- **Crash when opening the sheet**  
  Add to your app’s **Info.plist**: `CADisable Minimum Frame Duration On Phone` (Boolean, **YES**). Target → Info → Custom iOS Target Properties → +.
