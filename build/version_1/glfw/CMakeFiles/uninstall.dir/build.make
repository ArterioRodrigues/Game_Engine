# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.25.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.25.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/arteriorodrigues/git/Game_Engine/GAME

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/arteriorodrigues/git/Game_Engine/build/version_1

# Utility rule file for uninstall.

# Include any custom commands dependencies for this target.
include glfw/CMakeFiles/uninstall.dir/compiler_depend.make

# Include the progress variables for this target.
include glfw/CMakeFiles/uninstall.dir/progress.make

glfw/CMakeFiles/uninstall:
	cd /Users/arteriorodrigues/git/Game_Engine/build/version_1/glfw && /usr/local/Cellar/cmake/3.25.3/bin/cmake -P /Users/arteriorodrigues/git/Game_Engine/build/version_1/glfw/cmake_uninstall.cmake

uninstall: glfw/CMakeFiles/uninstall
uninstall: glfw/CMakeFiles/uninstall.dir/build.make
.PHONY : uninstall

# Rule to build all files generated by this target.
glfw/CMakeFiles/uninstall.dir/build: uninstall
.PHONY : glfw/CMakeFiles/uninstall.dir/build

glfw/CMakeFiles/uninstall.dir/clean:
	cd /Users/arteriorodrigues/git/Game_Engine/build/version_1/glfw && $(CMAKE_COMMAND) -P CMakeFiles/uninstall.dir/cmake_clean.cmake
.PHONY : glfw/CMakeFiles/uninstall.dir/clean

glfw/CMakeFiles/uninstall.dir/depend:
	cd /Users/arteriorodrigues/git/Game_Engine/build/version_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/arteriorodrigues/git/Game_Engine/GAME /Users/arteriorodrigues/git/Game_Engine/GAME/glfw /Users/arteriorodrigues/git/Game_Engine/build/version_1 /Users/arteriorodrigues/git/Game_Engine/build/version_1/glfw /Users/arteriorodrigues/git/Game_Engine/build/version_1/glfw/CMakeFiles/uninstall.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : glfw/CMakeFiles/uninstall.dir/depend

