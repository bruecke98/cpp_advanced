# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\bruec\cppp\04_advanced\04_advanced

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bruec\cppp\04_advanced\04_advanced\build

# Utility rule file for ContinuousUpdate.

# Include any custom commands dependencies for this target.
include _deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/progress.make

_deps/catch2-build/CMakeFiles/ContinuousUpdate:
	cd /d C:\Users\bruec\cppp\04_advanced\04_advanced\build\_deps\catch2-build && "C:\Program Files\CMake\bin\ctest.exe" -D ContinuousUpdate

ContinuousUpdate: _deps/catch2-build/CMakeFiles/ContinuousUpdate
ContinuousUpdate: _deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/build.make
.PHONY : ContinuousUpdate

# Rule to build all files generated by this target.
_deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/build: ContinuousUpdate
.PHONY : _deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/build

_deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/clean:
	cd /d C:\Users\bruec\cppp\04_advanced\04_advanced\build\_deps\catch2-build && $(CMAKE_COMMAND) -P CMakeFiles\ContinuousUpdate.dir\cmake_clean.cmake
.PHONY : _deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/clean

_deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bruec\cppp\04_advanced\04_advanced C:\Users\bruec\cppp\04_advanced\04_advanced\build\_deps\catch2-src C:\Users\bruec\cppp\04_advanced\04_advanced\build C:\Users\bruec\cppp\04_advanced\04_advanced\build\_deps\catch2-build C:\Users\bruec\cppp\04_advanced\04_advanced\build\_deps\catch2-build\CMakeFiles\ContinuousUpdate.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/catch2-build/CMakeFiles/ContinuousUpdate.dir/depend

