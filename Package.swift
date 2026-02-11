// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "ChatSDK",
    platforms: [.iOS(.v14)],
    products: [
        .library(name: "ChatSDK", targets: ["ChatSDK"]),
    ],
    targets: [
        // PRIVATE REPO CONFIGURATION
        // Host app MUST have ~/.netrc with GitHub PAT for api.github.com
        .binaryTarget(
            name: "ChatSDK",
            url: "https://api.github.com/repos/Prasadpatil1508/air-canada-chat-library/releases/assets/353629955.zip",
            checksum: "317ef68a3d9e46107a119e684301293310325d3be164c9518248cdbcd83c33c8"
        )
    ]
)