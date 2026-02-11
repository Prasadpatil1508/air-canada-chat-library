# iOS Host App — Using the Chat Library from a Private Repo

When the library repo is **private**, Xcode/SPM cannot download the XCFramework from the standard release URL (`/releases/download/...`) because that URL does not support authenticated access. This guide uses the **GitHub API** URL and **`.netrc`** so SPM can download the binary with your GitHub token.

---

## 1. Update Package.swift (library maintainer)

The library’s **Package.swift** uses the GitHub API URL for the binary target so that the host app can authenticate via `.netrc`:

```swift
.binaryTarget(
    name: "ChatSDK",
    url: "https://api.github.com/repos/Prasadpatil1508/air-canada-chat-library/releases/assets/ASSET_ID",
    checksum: "YOUR_CHECKSUM"
)
```

**Replace `ASSET_ID`** with the numeric asset ID for `ChatSDK.xcframework.zip` for the release you want (e.g. `v1.0.31`).

---

## 2. Find the Asset ID (host app developer or maintainer)

**Where to run:** On your Mac, in **Terminal** (or any terminal app). You can run it from any folder; the `--repo` flag points at the repository.

**When to run:** (1) The first time you set up the private-repo flow, so you can put the numeric ID into Package.swift; (2) whenever you publish a **new** release (e.g. v1.0.32)—each release has different asset IDs, so run the command for that tag and update Package.swift with the new ID.

Run this in Terminal (install [GitHub CLI](https://cli.github.com/) if needed: `brew install gh` and `gh auth login`). Use the **REST API** so you get the **numeric** asset ID (required for the download URL). `gh release view --json assets` returns GraphQL node IDs like `RA_kwDO...`, which are not valid for the API URL:

```bash
gh api /repos/Prasadpatil1508/air-canada-chat-library/releases/tags/v1.0.31 --jq '.assets[] | select(.name=="ChatSDK.xcframework.zip") | .id'
```

- Replace **`v1.0.31`** with the release tag you want.
- Replace **`Prasadpatil1508/air-canada-chat-library`** if your repo is under a different org/repo.
- The command prints a **number** (e.g. `123456789`). That is your **ASSET_ID**.

Put that number into **Package.swift** in the library repo:

```swift
url: "https://api.github.com/repos/Prasadpatil1508/air-canada-chat-library/releases/assets/123456789",
```

Then commit and push (or use that Package.swift in your host app’s resolved package).

**Note:** Each release has different asset IDs. When you move to a new version (e.g. v1.0.32), run the same `gh release view` command for that tag and update the URL in Package.swift.

---

## 3. Compute or verify the checksum (after changing the zip)

If you have the **local** `ChatSDK.xcframework.zip` file (e.g. downloaded from the release or built locally), run:

```bash
swift package compute-checksum /path/to/ChatSDK.xcframework.zip
```

Example if the zip is in your Downloads folder:

```bash
swift package compute-checksum ~/Downloads/ChatSDK.xcframework.zip
```

Copy the printed checksum (64 hex characters) into Package.swift:

```swift
checksum: "PASTE_THE_OUTPUT_HERE"
```

If the zip for that release has not changed, keep the existing checksum in Package.swift.

---

## 4. Set up authentication on the host app machine (~/.netrc)

So that Xcode/SPM can access the **private** repo and the **GitHub API** (to download the asset), add your GitHub credentials to **`.netrc`** on the machine where you open the host app in Xcode.

### 4.1 Create or edit `~/.netrc`

In Terminal:

```bash
touch ~/.netrc
chmod 600 ~/.netrc
open -e ~/.netrc
```

(or use `nano ~/.netrc` / `vim ~/.netrc` instead of `open -e`).

### 4.2 Add these lines (replace with your GitHub username and PAT)

```text
machine api.github.com
login YOUR_GITHUB_USERNAME
password YOUR_GITHUB_PERSONAL_ACCESS_TOKEN

machine github.com
login YOUR_GITHUB_USERNAME
password YOUR_GITHUB_PERSONAL_ACCESS_TOKEN
```

- **YOUR_GITHUB_USERNAME** — GitHub username of an account that has **read** access to the private repo.
- **YOUR_GITHUB_PERSONAL_ACCESS_TOKEN** — [Personal Access Token](https://github.com/settings/tokens) (Classic) with at least **`repo`** (for private repo clone) and **`read:packages`** if the release is in a private package. For private repos, **`repo`** is usually enough for releases.

Use the same account that can open the repo in a browser when logged in.

### 4.3 Restrict permissions and don’t commit

- Keep permissions: `chmod 600 ~/.netrc` (only you can read/write).
- **Do not** commit `~/.netrc` or your token to any repo.

### 4.4 Verify the file

```bash
cat ~/.netrc
```

You should see the two `machine` blocks (with your real login and password). If the file was empty before, create it and add the blocks as above.

---

## 5. Use the package in Xcode

1. In the **host app**, add the package: **File → Add Package Dependencies…**
2. Enter the repo URL: `https://github.com/Prasadpatil1508/air-canada-chat-library`
3. Choose **Exact Version** or **Up to Next Major** and pick the tag that has the **Package.swift** with the correct **ASSET_ID** and **checksum** (e.g. `1.0.31`).
4. Add the **ChatSDK** product to your app target → **Add Package**.

Xcode will:

- Clone the repo (using `github.com` and your `.netrc`).
- Read **Package.swift** and fetch the binary from `api.github.com/repos/.../releases/assets/ASSET_ID` (using `api.github.com` from `.netrc`).

If resolution still fails:

- **Right-click the package** in the Project navigator → **Update to Latest Package Versions**.
- Confirm **Package.swift** in the repo has the correct **ASSET_ID** for that release and the correct **checksum**.

---

## 6. If SPM still can’t download the binary (e.g. URL must end in .zip)

Some SPM versions expect the binary URL to **end in `.zip`**. The GitHub API URL does not. If you see a resolution or “unsupported archive” error:

**Option A — Manual download and local path (no Package.swift change for URL)**

1. Download the zip with auth (in Terminal):

   ```bash
   gh release download v1.0.31 --repo Prasadpatil1508/air-canada-chat-library --pattern "ChatSDK.xcframework.zip" -D ~/Downloads
   ```

2. In Xcode: add the **unzipped** **ChatSDK.xcframework** to your app target: **Frameworks, Libraries, and Embedded Content** → **Add Other…** → **Add Files…** → select **ChatSDK.xcframework** → **Embed & Sign**.

**Option B — Keep using SPM with API URL**

Ensure:

- **Package.swift** uses the correct **ASSET_ID** and **checksum** for that release.
- **~/.netrc** has both `api.github.com` and `github.com` with the same login and token.
- You’re on a network that can reach GitHub and that Xcode is using the same user (so it sees `~/.netrc`).

---

## Quick reference

| What | Command or value |
|------|-------------------|
| **Get numeric asset ID for v1.0.31** | `gh api /repos/Prasadpatil1508/air-canada-chat-library/releases/tags/v1.0.31 --jq '.assets[] \| select(.name=="ChatSDK.xcframework.zip") \| .id'` |
| **Compute checksum** | `swift package compute-checksum /path/to/ChatSDK.xcframework.zip` |
| **Check .netrc** | `cat ~/.netrc` (ensure `machine api.github.com` and `machine github.com` with login + password) |
| **Package.swift URL (private)** | `https://api.github.com/repos/Prasadpatil1508/air-canada-chat-library/releases/assets/ASSET_ID` |
