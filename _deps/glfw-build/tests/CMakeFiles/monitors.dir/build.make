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
include _deps/glfw-build/tests/CMakeFiles/monitors.dir/depend.make

# Include the progress variables for this target.
include _deps/glfw-build/tests/CMakeFiles/monitors.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/glfw-build/tests/CMakeFiles/monitors.dir/flags.make

_deps/glfw-build/tests/CMakeFiles/monitors.dir/monitors.c.o: _deps/glfw-build/tests/CMakeFiles/monitors.dir/flags.make
_deps/glfw-build/tests/CMakeFiles/monitors.dir/monitors.c.o: _deps/glfw-src/tests/monitors.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/glfw-build/tests/CMakeFiles/monitors.dir/monitors.c.o"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/monitors.dir/monitors.c.o   -c "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests/monitors.c"

_deps/glfw-build/tests/CMakeFiles/monitors.dir/monitors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/monitors.dir/monitors.c.i"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests/monitors.c" > CMakeFiles/monitors.dir/monitors.c.i

_deps/glfw-build/tests/CMakeFiles/monitors.dir/monitors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/monitors.dir/monitors.c.s"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests/monitors.c" -o CMakeFiles/monitors.dir/monitors.c.s

_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/getopt.c.o: _deps/glfw-build/tests/CMakeFiles/monitors.dir/flags.make
_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/getopt.c.o: _deps/glfw-src/deps/getopt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object _deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/getopt.c.o"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/monitors.dir/__/deps/getopt.c.o   -c "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/getopt.c"

_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/getopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/monitors.dir/__/deps/getopt.c.i"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/getopt.c" > CMakeFiles/monitors.dir/__/deps/getopt.c.i

_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/getopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/monitors.dir/__/deps/getopt.c.s"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/getopt.c" -o CMakeFiles/monitors.dir/__/deps/getopt.c.s

_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/glad_gl.c.o: _deps/glfw-build/tests/CMakeFiles/monitors.dir/flags.make
_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/glad_gl.c.o: _deps/glfw-src/deps/glad_gl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object _deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/glad_gl.c.o"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/monitors.dir/__/deps/glad_gl.c.o   -c "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/glad_gl.c"

_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/glad_gl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/monitors.dir/__/deps/glad_gl.c.i"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/glad_gl.c" > CMakeFiles/monitors.dir/__/deps/glad_gl.c.i

_deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/glad_gl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/monitors.dir/__/deps/glad_gl.c.s"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/arthur/Desktop/cpp mg/_deps/glfw-src/deps/glad_gl.c" -o CMakeFiles/monitors.dir/__/deps/glad_gl.c.s

# Object files for target monitors
monitors_OBJECTS = \
"CMakeFiles/monitors.dir/monitors.c.o" \
"CMakeFiles/monitors.dir/__/deps/getopt.c.o" \
"CMakeFiles/monitors.dir/__/deps/glad_gl.c.o"

# External object files for target monitors
monitors_EXTERNAL_OBJECTS =

_deps/glfw-build/tests/monitors: _deps/glfw-build/tests/CMakeFiles/monitors.dir/monitors.c.o
_deps/glfw-build/tests/monitors: _deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/getopt.c.o
_deps/glfw-build/tests/monitors: _deps/glfw-build/tests/CMakeFiles/monitors.dir/__/deps/glad_gl.c.o
_deps/glfw-build/tests/monitors: _deps/glfw-build/tests/CMakeFiles/monitors.dir/build.make
_deps/glfw-build/tests/monitors: _deps/glfw-build/src/libglfw3.a
_deps/glfw-build/tests/monitors: /usr/lib/x86_64-linux-gnu/libm.so
_deps/glfw-build/tests/monitors: /usr/lib/x86_64-linux-gnu/librt.so
_deps/glfw-build/tests/monitors: /usr/lib/x86_64-linux-gnu/libm.so
_deps/glfw-build/tests/monitors: /usr/lib/x86_64-linux-gnu/libX11.so
_deps/glfw-build/tests/monitors: _deps/glfw-build/tests/CMakeFiles/monitors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable monitors"
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/monitors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/glfw-build/tests/CMakeFiles/monitors.dir/build: _deps/glfw-build/tests/monitors

.PHONY : _deps/glfw-build/tests/CMakeFiles/monitors.dir/build

_deps/glfw-build/tests/CMakeFiles/monitors.dir/clean:
	cd "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" && $(CMAKE_COMMAND) -P CMakeFiles/monitors.dir/cmake_clean.cmake
.PHONY : _deps/glfw-build/tests/CMakeFiles/monitors.dir/clean

_deps/glfw-build/tests/CMakeFiles/monitors.dir/depend:
	cd "/home/arthur/Desktop/cpp mg" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/arthur/Desktop/cpp mg" "/home/arthur/Desktop/cpp mg/_deps/glfw-src/tests" "/home/arthur/Desktop/cpp mg" "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests" "/home/arthur/Desktop/cpp mg/_deps/glfw-build/tests/CMakeFiles/monitors.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : _deps/glfw-build/tests/CMakeFiles/monitors.dir/depend

