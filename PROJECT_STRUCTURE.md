# Chat Library POC — Project Structure & Architecture

This document describes the **repository layout**, **Kotlin Multiplatform (KMP) source sets**, **package structure**, and **integration points** for senior developers.

---

## 1. Overview

- **What it is:** A KMP shared library that provides a **chat bottom sheet** (Compose Multiplatform UI) and **AWS Connect** integration (start-chat API + participant connection + WebSocket messaging). Consumed by **Android** (AAR / Maven) and **iOS** (XCFramework).
- **Root project name:** `chat-poc` (Gradle); **shared module:** `:shared`; **library coordinates:** `io.github.prasadpatil1508.chat_library_poc:chat-library-poc-android:<version>`.
- **Tech:** Kotlin 2.3, Compose Multiplatform 1.10, Material3, Ktor (HTTP + WebSockets). No AWS SDK; AWS APIs are called directly via Ktor.

---

## 2. Repository Layout (Root)

```
chat-library-poc/
├── .github/workflows/          # CI (e.g. publish-android.yml)
├── androidApp/                 # Docs/samples for Android host (no app code in repo)
│   └── README.md
├── iosApp/                     # Docs + sample Swift (ContentView, ContentView_ChatSample)
│   ├── README.md
│   ├── ContentView.swift
│   └── ContentView_ChatSample.swift
├── shared/                     # KMP library (only code module)
│   ├── build.gradle.kts
│   ├── ARCHITECTURE.md         # Shared-module mapping to AWS reference app
│   ├── COMPOSE_RESOURCES.md
│   └── src/
│       ├── commonMain/         # Shared logic + UI
│       ├── androidMain/        # Android-specific (expect/actual, resources)
│       └── iosMain/            # iOS-specific (expect/actual)
├── gradle/                     # Wrapper + libs.versions.toml
├── build.gradle.kts            # Root build (minimal)
├── settings.gradle.kts         # include(":shared")
├── gradle.properties           # JVM heap, workers, Kotlin/Android flags
├── local.properties.example    # Template for API_GATEWAY, REGION, etc. (gitignored: local.properties)
├── Package.swift               # Swift Package Manager (binary XCFramework)
├── README.md                   # Quick start, phase 1/2, tech stack
├── ENV.md                      # Connect config (library-owned, from local.properties)
├── LOCAL_TESTING.md            # Maven Local, XCFramework local testing
├── PUBLISHING.md               # GitHub Packages (Android) + Releases (iOS)
├── TROUBLESHOOTING.md
└── PROJECT_STRUCTURE.md        # This file
```

---

## 3. Shared Module — Source Sets

| Source set     | Role |
|----------------|------|
| **commonMain** | All business logic, API, Connect (HTTP/WebSocket), domain, config, Compose UI, theme, views. Single codebase for Android + iOS. |
| **androidMain** | Expect/actual: `PlatformHttpClient`, `ChatPoc`, `MarkdownRenderer`, `ChatSessionStorage`, `ChatLibraryLog`, `UrlOpener`, UI (AiAvatar, CustomerAvatar, HeaderLogo). Android resources (drawables). |
| **iosMain**    | Expect/actual: same list as Android where applicable. iOS uses Compose `ComposeUIViewController`; no native UI for markdown (Compose `Text` only). |

**Entry points:**

- **Android:** `ChatPoc.showBottomSheet(activity, config, callbacks)` — implemented in `androidMain`; hosts Compose in a `ComponentDialog` and uses `ui.views.ChatBottomSheetContent`.
- **iOS:** `createBottomSheetViewController(config, callbacks)` (and Swift-friendly overload with `title`, `messages`, `authToken`, callbacks) — implemented in `iosMain`; returns `UIViewController` from `ComposeUIViewController`; content is `ui.views.ChatBottomSheetContent`.

---

## 4. Shared Module — Package Structure (`commonMain`)

Package base: `com.example.chat_poc`.

| Package / path | Purpose |
|----------------|--------|
| **Root** | `ChatPoc` (entry-point object), `ChatLibraryConfig`, `ChatLibraryCallbacks`, `ConnectToken` (public API for fetch token). |
| **api/** | Start-chat HTTP: `StartChatApi`, `KtorStartChatApi`, `PlatformHttpClient` (expect/actual). |
| **config/** | `ConnectConfig`, `LibraryConnectConfig` (generated from `local.properties` at build time). |
| **connect/** | AWS Connect chat: |
| **connect/api/** | `ParticipantConnectionApi`, `AwsParticipantConnectionApi` (CreateParticipantConnection, SendMessage). |
| **connect/model/** | `ConnectChatDetails`, `ConnectionDetails`, `ChatMessage`, `ChatItem`, `BotPayloadModels`, etc. |
| **connect/parser/** | `ConnectWebSocketParser`, `AwsChatTransport` (WebSocket message parsing). |
| **connect/session/** | `ConnectChatSession`, `ConnectSessionKtor`, `ConnectChat` — session abstraction + Ktor impl; `createConnectChatSessionOrNull()`. |
| **domain/** | `FetchConnectTokenUseCase` (start-chat → token/details). |
| **model/** | Start-chat DTOs: `StartChatRequest`, `StartChatResponse`, `StartChatApiResponseDto`. |
| **storage/** | `ChatSessionStorage` (expect/actual: Android SharedPreferences, iOS UserDefaults). |
| **ui/** | Compose UI: `ChatUi`, `MarkdownText`, theme (`Color`, `Theme`, `Type`), avatars/header (expect/actual + Base64 data). |
| **ui/views/** | `ChatBottomSheet` (bottom sheet content), `ChatMessageContent`, `FlightStatusContent`. |
| **markdown/** | `MarkdownRenderer` (expect/actual: Android Markwon, iOS plain `Text`). |
| **util/** | `ChatLibraryLog`, `UrlOpener` (expect/actual), `TimestampFormat`. |

Generated at build time (do not edit):

- **config/LibraryConnectConfig.kt** — from `generateConnectConfig` (reads `local.properties`: `API_GATEWAY`, `CONTACT_FLOW_ID`, `INSTANCE_ID`, `REGION`).
- **ui/** `*Data.kt` (e.g. `AiAvatarData`, `HeaderLogoData`, `CustomerAvatarData`) — Base64-embedded drawables for AAR.

---

## 5. Build & Artifacts

- **Android:** `./gradlew :shared:assembleRelease` → AAR. Publish: `:shared:publishToMavenLocal` or GitHub Packages (see PUBLISHING.md). Host adds `io.github.prasadpatil1508.chat_library_poc:chat-library-poc-android:<version>`.
- **iOS:** `./gradlew :shared:assembleSharedReleaseXCFramework` → `shared/build/XCFrameworks/release/` (e.g. `shared.xcframework` containing `ChatSDK.framework`). Host embeds the XCFramework or uses SPM with `Package.swift`.
- **Config:** `local.properties` (gitignored) must contain Connect keys for “Fetch Connect token” to work; see `local.properties.example` and ENV.md. If missing, library still builds; `LibraryConnectConfig.get()` returns `null` and Connect flow is disabled.

---

## 6. Host Integration Summary

| Platform | Dependency | Entry point | Host provides |
|----------|------------|------------|----------------|
| Android | Maven (e.g. `shared`) | `ChatPoc.showBottomSheet(activity, config, callbacks)` | `ComponentActivity`; optional `ChatLibraryConfig` and `ChatLibraryCallbacks`. |
| iOS | XCFramework (ChatSDK) | `ChatPoc_iosKt.createBottomSheetViewController(...)` | Present returned `UIViewController` as modal/sheet; optional plist `CADisableMinimumFrameDurationOnPhone` for ProMotion. |

Connect/start-chat config is **library-owned** (from `local.properties` at library build time), not passed by the host.

---

## 7. Key Docs for Seniors

- **shared/ARCHITECTURE.md** — Mapping to [amazon-connect-chat-ui-examples](https://github.com/amazon-connect/amazon-connect-chat-ui-examples); why no AWS SDK (Ktor used instead).
- **ENV.md** — Who owns Connect config, keys, and how `generateConnectConfig` works.
- **LOCAL_TESTING.md** — Testing with Maven Local and local XCFramework.
- **PUBLISHING.md** — Releasing Android (GitHub Packages) and iOS (XCFramework zip + optional SPM).
- **README.md** — Quick start, phase 1/2, and links to androidApp/iosApp READMEs.

---

## 8. Dependency Highlights (shared)

- **Compose:** `androidx.compose.*` (ui, foundation, material3); Compose compiler via Kotlin plugin.
- **Networking:** Ktor client (core, content-negotiation, serialization, websockets); `ktor-client-okhttp` (Android), `ktor-client-darwin` (iOS).
- **Other:** `kotlinx-coroutines`, `kotlinx-serialization-json`. Android: activity-compose, lifecycle; Markwon for markdown on Android only.

Versions are centralized in `gradle/libs.versions.toml`.
