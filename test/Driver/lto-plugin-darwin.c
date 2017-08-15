// Check that Darwin uses LLVMgold.dylib.
// REQUIRES: system-darwin
// RUN: %clang -### %s -flto 2>&1 \
// RUN:   | FileCheck -check-prefix=CHECK-LTO-PLUGIN %s
//
// CHECK-LTO-PLUGIN: "-plugin" "{{.*}}/LLVMgold.dylib"