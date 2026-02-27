#!/usr/bin/env bash
# Test Swift package resolution from command line to see the real error.
# Run from repo root: ./scripts/test-spm-resolve.sh
set -e
TEST_DIR=$(mktemp -d)
cd "$TEST_DIR"
echo "Creating test package in $TEST_DIR"
echo "// swift-tools-version: 5.9
import PackageDescription
let p = Package(
    name: \"Test\",
    platforms: [.iOS(.v14)],
    dependencies: [
        .package(url: \"https://github.com/PrathameshAdate05/chat-library-poc\", exact: \"1.0.28\")
    ],
    targets: [
        .target(name: \"Test\", dependencies: [.product(name: \"ChatSDK\", package: \"chat-library-poc\")])
    ]
)" > Package.swift
echo "Running: swift package resolve"
if swift package resolve 2>&1; then
  echo "Resolve succeeded."
else
  echo "Resolve failed (see above)."
  exit 1
fi
