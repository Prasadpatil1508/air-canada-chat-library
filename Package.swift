// swift-tools-version: 5.9
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
            url: "https://github.com/Prasadpatil1508/chat-library-poc/releases/download/v1.0.30/ChatSDK.xcframework.zip",
            checksum: "de04454481f023eb3357f39b613d646dc853cdb13f593bd5134c0fcba6115190"
        ),
    ]
)
