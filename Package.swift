// swift-tools-version: 5.9
// Swift Package Manager: add this repo as a package dependency to get the ChatSDK XCFramework.
// Binary URL pattern: https://github.com/PrathameshAdate05/air-canada-chat-library/releases/download/${TAG}/ChatSDK.xcframework.zip
// After each release: update url tag and checksum (swift package compute-checksum ChatSDK.xcframework.zip).
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
            url: "https://github.com/PrathameshAdate05/air-canada-chat-library/releases/download/v1.0.31/ChatSDK.xcframework.zip",
            checksum: "317ef68a3d9e46107a119e684301293310325d3be164c9518248cdbcd83c33c8"
        ),
    ]
)
