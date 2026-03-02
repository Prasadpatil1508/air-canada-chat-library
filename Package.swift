// swift-tools-version: 5.9
// Swift Package Manager: add this repo as a package dependency to get the ChatSDK XCFramework.
// Binary URL pattern: https://github.com/Prasadpatil1508/air-canada-chat-library/releases/download/${TAG}/ChatSDK.xcframework.zip
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
            url: "https://github.com/Prasadpatil1508/air-canada-chat-library/releases/download/v1.0.39/ChatSDK.xcframework.zip",
            checksum: "01f3988a08292eb53a4a49d999d6cf6fefd83d7e312bef15cc35ced5c0f6d6c5"
        ),
    ]
)
