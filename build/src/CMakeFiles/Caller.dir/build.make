# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mechanic/Desktop/wc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mechanic/Desktop/wc/build

# Include any dependencies generated for this target.
include src/CMakeFiles/Caller.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Caller.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Caller.dir/flags.make

src/CMakeFiles/Caller.dir/homework.cpp.o: src/CMakeFiles/Caller.dir/flags.make
src/CMakeFiles/Caller.dir/homework.cpp.o: ../src/homework.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mechanic/Desktop/wc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Caller.dir/homework.cpp.o"
	cd /home/mechanic/Desktop/wc/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Caller.dir/homework.cpp.o -c /home/mechanic/Desktop/wc/src/homework.cpp

src/CMakeFiles/Caller.dir/homework.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Caller.dir/homework.cpp.i"
	cd /home/mechanic/Desktop/wc/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mechanic/Desktop/wc/src/homework.cpp > CMakeFiles/Caller.dir/homework.cpp.i

src/CMakeFiles/Caller.dir/homework.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Caller.dir/homework.cpp.s"
	cd /home/mechanic/Desktop/wc/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mechanic/Desktop/wc/src/homework.cpp -o CMakeFiles/Caller.dir/homework.cpp.s

src/CMakeFiles/Caller.dir/homework.cpp.o.requires:

.PHONY : src/CMakeFiles/Caller.dir/homework.cpp.o.requires

src/CMakeFiles/Caller.dir/homework.cpp.o.provides: src/CMakeFiles/Caller.dir/homework.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Caller.dir/build.make src/CMakeFiles/Caller.dir/homework.cpp.o.provides.build
.PHONY : src/CMakeFiles/Caller.dir/homework.cpp.o.provides

src/CMakeFiles/Caller.dir/homework.cpp.o.provides.build: src/CMakeFiles/Caller.dir/homework.cpp.o


# Object files for target Caller
Caller_OBJECTS = \
"CMakeFiles/Caller.dir/homework.cpp.o"

# External object files for target Caller
Caller_EXTERNAL_OBJECTS =

src/Caller: src/CMakeFiles/Caller.dir/homework.cpp.o
src/Caller: src/CMakeFiles/Caller.dir/build.make
src/Caller: src/CMakeFiles/Caller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mechanic/Desktop/wc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Caller"
	cd /home/mechanic/Desktop/wc/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Caller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Caller.dir/build: src/Caller

.PHONY : src/CMakeFiles/Caller.dir/build

src/CMakeFiles/Caller.dir/requires: src/CMakeFiles/Caller.dir/homework.cpp.o.requires

.PHONY : src/CMakeFiles/Caller.dir/requires

src/CMakeFiles/Caller.dir/clean:
	cd /home/mechanic/Desktop/wc/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Caller.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Caller.dir/clean

src/CMakeFiles/Caller.dir/depend:
	cd /home/mechanic/Desktop/wc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mechanic/Desktop/wc /home/mechanic/Desktop/wc/src /home/mechanic/Desktop/wc/build /home/mechanic/Desktop/wc/build/src /home/mechanic/Desktop/wc/build/src/CMakeFiles/Caller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Caller.dir/depend

