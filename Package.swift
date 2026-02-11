// swift-tools-version: 5.9
// Swift Package Manager: add this repo as a package dependency to get the ChatSDK XCFramework.
//
// PUBLIC REPO: Use the releases/download URL (comment out the binaryTarget below and use the one in the "Public" block).
// PRIVATE REPO: Use the GitHub API URL so Xcode/SPM can download with .netrc auth. Replace ASSET_ID with the
//   numeric asset ID from: gh api /repos/Prasadpatil1508/air-canada-chat-library/releases/tags/v1.0.31 --jq '.assets[] | select(.name=="ChatSDK.xcframework.zip") | .id'
// After each release: update the tag in the gh command, replace ASSET_ID here, and update checksum (see IOS_PRIVATE_REPO_GUIDE.md).
import PackageDescription

let package = Package(
    name: "ChatSDK",
    platforms: [.iOS(.v14)],
    products: [
        .library(name: "ChatSDK", targets: ["ChatSDK"]),
    ],
    targets: [
        // Private repo: GitHub API URL (host app must have ~/.netrc with GitHub PAT for api.github.com).
        .binaryTarget(
            name: "ChatSDK",
            url: "https://api.github.com/repos/Prasadpatil1508/air-canada-chat-library/releases/assets/353629955",
            checksum: "317ef68a3d9e46107a119e684301293310325d3be164c9518248cdbcd83c33c8"
        ),
        // Public repo (uncomment and remove the block above if the repo is public):
        // .binaryTarget(
        //     name: "ChatSDK",
        //     url: "https://github.com/Prasadpatil1508/air-canada-chat-library/releases/download/v1.0.31/ChatSDK.xcframework.zip",
        //     checksum: "317ef68a3d9e46107a119e684301293310325d3be164c9518248cdbcd83c33c8"
        // ),
    ]
)
