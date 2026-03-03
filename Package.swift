// swift-tools-version: 5.9
// Swift Package Manager: add this repo as a package dependency to consume ChatSDK.xcframework.
//
// The XCFramework is stored directly in this repository (path-based binary target).
// No remote URL or checksum is needed. Private repo access works via SSH.
//
// Consumer setup (iOS app):
//   File → Add Package Dependencies → enter the SSH URL:
//   git@github.com:Prasadpatil1508/air-canada-chat-library.git
//
// See IOS_SPM_GUIDE.md for full instructions.
import PackageDescription

let package = Package(
    name: "ChatSDK",
    platforms: [.iOS(.v14)],
    products: [
        .library(name: "ChatSDK", targets: ["ChatSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "ChatSDK",
            path: "ChatSDK.xcframework"
        ),
    ]
)
