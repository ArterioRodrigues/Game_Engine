#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC
  /usr/local/Cellar/cmake/3.25.3/bin/cmake -E cmake_symlink_library /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/Debug/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/Debug/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/Debug/libARC.dylib
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC
  /usr/local/Cellar/cmake/3.25.3/bin/cmake -E cmake_symlink_library /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/Release/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/Release/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/Release/libARC.dylib
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC
  /usr/local/Cellar/cmake/3.25.3/bin/cmake -E cmake_symlink_library /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/MinSizeRel/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/MinSizeRel/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/MinSizeRel/libARC.dylib
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC
  /usr/local/Cellar/cmake/3.25.3/bin/cmake -E cmake_symlink_library /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/RelWithDebInfo/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/RelWithDebInfo/libARC.dylib /Users/arteriorodrigues/git/Game_Engine/build/Xcode_build/ARC/RelWithDebInfo/libARC.dylib
fi

