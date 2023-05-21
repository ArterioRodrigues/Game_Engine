#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1
  make -f /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1
  make -f /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1
  make -f /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1
  make -f /Users/arteriorodrigues/git/Game_Engine/build/VS_build_v1/CMakeScripts/ReRunCMake.make
fi

