# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/arthur/Desktop/cpp mg"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/arthur/Desktop/cpp mg"

# Include any dependencies generated for this target.
include _deps/glfw-build/tests/CMakeFiles/opacity.dir/depend.make

# Include the progress variables for this target.
include _deps/glfw-build/tests/CMakeFiles/opacity.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/glfw-build/tests/CMakeFiles/opacity.dir/flags.make

_deps/glfw-build/tests/CMakeFiles/opacity.dir/opacity.c.o: _deps/glfw-build/tests/CMakeFiles/opacity.dir/flags.make
_deps/glfw-build/tests/CMakeFiles/opacity.dir/opacity.c.o: _deps/glfw-src/tests/opacity.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/glfw-build/tests/CMakeFiles/opacity.dir/opacity.c.o"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/opacity.dir/opacity.c.o   -c "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests/opacity.c"

_deps/glfw-build/tests/CMakeFiles/opacity.dir/opacity.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/opacity.dir/opacity.c.i"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests/opacity.c" > CMakeFiles/opacity.dir/opacity.c.i

_deps/glfw-build/tests/CMakeFiles/opacity.dir/opacity.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/opacity.dir/opacity.c.s"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests/opacity.c" -o CMakeFiles/opacity.dir/opacity.c.s

_deps/glfw-build/tests/CMakeFiles/opacity.dir/__/deps/glad_gl.c.o: _deps/glfw-build/tests/CMakeFiles/opacity.dir/flags.make
_deps/glfw-build/tests/CMakeFiles/opacity.dir/__/deps/glad_gl.c.o: _deps/glfw-src/deps/glad_gl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object _deps/glfw-build/tests/CMakeFiles/opacity.dir/__/deps/glad_gl.c.o"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/opacity.dir/__/deps/glad_gl.c.o   -c "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/glad_gl.c"

_deps/glfw-build/tests/CMakeFiles/opacity.dir/__/deps/glad_gl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/opacity.dir/__/deps/glad_gl.c.i"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/glad_gl.c" > CMakeFiles/opacity.dir/__/deps/glad_gl.c.i

_deps/glfw-build/tests/CMakeFiles/opacity.dir/__/deps/glad_gl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/opacity.dir/__/deps/glad_gl.c.s"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/glad_gl.c" -o CMakeFiles/opacity.dir/__/deps/glad_gl.c.s

# Object files for target opacity
opacity_OBJECTS = \
"CMakeFiles/opacity.dir/opacity.c.o" \
"CMakeFiles/opacity.dir/__/deps/glad_gl.c.o"

# External object files for target opacity
opacity_EXTERNAL_OBJECTS =

_deps/glfw-build/tests/opacity: _deps/glfw-build/tests/CMakeFiles/opacity.dir/opacity.c.o
_deps/glfw-build/tests/opacity: _deps/glfw-build/tests/CMakeFiles/opacity.dir/__/deps/glad_gl.c.o
_deps/glfw-build/tests/opacity: _deps/glfw-build/tests/CMakeFiles/opacity.dir/build.make
_deps/glfw-build/tests/opacity: _deps/glfw-build/src/libglfw3.a
_deps/glfw-build/tests/opacity: /usr/lib/x86_64-linux-gnu/libm.so
_deps/glfw-build/tests/opacity: /usr/lib/x86_64-linux-gnu/librt.so
_deps/glfw-build/tests/opacity: /usr/lib/x86_64-linux-gnu/libm.so
_deps/glfw-build/tests/opacity: /usr/lib/x86_64-linux-gnu/libX11.so
_deps/glfw-build/tests/opacity: _deps/glfw-build/tests/CMakeFiles/opacity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable opacity"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opacity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/glfw-build/tests/CMakeFiles/opacity.dir/build: _deps/glfw-build/tests/opacity

.PHONY : _deps/glfw-build/tests/CMakeFiles/opacity.dir/build

_deps/glfw-build/tests/CMakeFiles/opacity.dir/clean:
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && $(CMAKE_COMMAND) -P CMakeFiles/opacity.dir/cmake_clean.cmake
.PHONY : _deps/glfw-build/tests/CMakeFiles/opacity.dir/clean

_deps/glfw-build/tests/CMakeFiles/opacity.dir/depend:
	cd "/home/arthur/Desktop/cpp mg" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/arthur/Desktop/cpp mg" "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests" "/home/arthur/Desktop/cpp mg" "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests/CMakeFiles/opacity.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : _deps/glfw-build/tests/CMakeFiles/opacity.dir/depend

