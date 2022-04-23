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
include _deps/glad-build/CMakeFiles/glad.dir/depend.make

# Include the progress variables for this target.
include _deps/glad-build/CMakeFiles/glad.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/glad-build/CMakeFiles/glad.dir/flags.make

_deps/glad-build/include/glad/glad.h:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating GLAD"
	cd "/home/arthur/Desktop/cpp mg/_deps/glad-src" && /bin/python3.8 -m glad --profile=compatibility --out-path=/home/arthur/Desktop/cpp\ mg/_deps/glad-build --api= --generator=c --extensions= --spec=gl

_deps/glad-build/src/glad.c: _deps/glad-build/include/glad/glad.h
	@$(CMAKE_COMMAND) -E touch_nocreate _deps/glad-build/src/glad.c

_deps/glad-build/CMakeFiles/glad.dir/src/glad.c.o: _deps/glad-build/CMakeFiles/glad.dir/flags.make
_deps/glad-build/CMakeFiles/glad.dir/src/glad.c.o: _deps/glad-build/src/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object _deps/glad-build/CMakeFiles/glad.dir/src/glad.c.o"
	cd "/home/arthur/Desktop/cpp mg/_deps/glad-build" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glad.dir/src/glad.c.o   -c "/home/arthur/Desktop/cpp mg/_deps/glad-build/src/glad.c"

_deps/glad-build/CMakeFiles/glad.dir/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glad.dir/src/glad.c.i"
	cd "/home/arthur/Desktop/cpp mg/_deps/glad-build" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/arthur/Desktop/cpp mg/_deps/glad-build/src/glad.c" > CMakeFiles/glad.dir/src/glad.c.i

_deps/glad-build/CMakeFiles/glad.dir/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glad.dir/src/glad.c.s"
	cd "/home/arthur/Desktop/cpp mg/_deps/glad-build" && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/arthur/Desktop/cpp mg/_deps/glad-build/src/glad.c" -o CMakeFiles/glad.dir/src/glad.c.s

# Object files for target glad
glad_OBJECTS = \
"CMakeFiles/glad.dir/src/glad.c.o"

# External object files for target glad
glad_EXTERNAL_OBJECTS =

_deps/glad-build/libglad.a: _deps/glad-build/CMakeFiles/glad.dir/src/glad.c.o
_deps/glad-build/libglad.a: _deps/glad-build/CMakeFiles/glad.dir/build.make
_deps/glad-build/libglad.a: _deps/glad-build/CMakeFiles/glad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/arthur/Desktop/cpp mg/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libglad.a"
	cd "/home/arthur/Desktop/cpp mg/_deps/glad-build" && $(CMAKE_COMMAND) -P CMakeFiles/glad.dir/cmake_clean_target.cmake
	cd "/home/arthur/Desktop/cpp mg/_deps/glad-build" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glad.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/glad-build/CMakeFiles/glad.dir/build: _deps/glad-build/libglad.a

.PHONY : _deps/glad-build/CMakeFiles/glad.dir/build

_deps/glad-build/CMakeFiles/glad.dir/clean:
	cd "/home/arthur/Desktop/cpp mg/_deps/glad-build" && $(CMAKE_COMMAND) -P CMakeFiles/glad.dir/cmake_clean.cmake
.PHONY : _deps/glad-build/CMakeFiles/glad.dir/clean

_deps/glad-build/CMakeFiles/glad.dir/depend: _deps/glad-build/include/glad/glad.h
_deps/glad-build/CMakeFiles/glad.dir/depend: _deps/glad-build/src/glad.c
	cd "/home/arthur/Desktop/cpp mg" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/arthur/Desktop/cpp mg" "/home/arthur/Desktop/cpp mg/_deps/glad-src" "/home/arthur/Desktop/cpp mg" "/home/arthur/Desktop/cpp mg/_deps/glad-build" "/home/arthur/Desktop/cpp mg/_deps/glad-build/CMakeFiles/glad.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : _deps/glad-build/CMakeFiles/glad.dir/depend

