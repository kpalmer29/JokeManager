# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/main.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/main.cpp.o -c "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/main.cpp"

CMakeFiles/untitled.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/main.cpp" > CMakeFiles/untitled.dir/main.cpp.i

CMakeFiles/untitled.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/main.cpp" -o CMakeFiles/untitled.dir/main.cpp.s

CMakeFiles/untitled.dir/joke.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/joke.cpp.o: ../joke.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled.dir/joke.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/joke.cpp.o -c "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/joke.cpp"

CMakeFiles/untitled.dir/joke.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/joke.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/joke.cpp" > CMakeFiles/untitled.dir/joke.cpp.i

CMakeFiles/untitled.dir/joke.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/joke.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/joke.cpp" -o CMakeFiles/untitled.dir/joke.cpp.s

CMakeFiles/untitled.dir/jokeMgr.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/jokeMgr.cpp.o: ../jokeMgr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled.dir/jokeMgr.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/jokeMgr.cpp.o -c "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/jokeMgr.cpp"

CMakeFiles/untitled.dir/jokeMgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/jokeMgr.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/jokeMgr.cpp" > CMakeFiles/untitled.dir/jokeMgr.cpp.i

CMakeFiles/untitled.dir/jokeMgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/jokeMgr.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/jokeMgr.cpp" -o CMakeFiles/untitled.dir/jokeMgr.cpp.s

CMakeFiles/untitled.dir/Category.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/Category.cpp.o: ../Category.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled.dir/Category.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/Category.cpp.o -c "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/Category.cpp"

CMakeFiles/untitled.dir/Category.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/Category.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/Category.cpp" > CMakeFiles/untitled.dir/Category.cpp.i

CMakeFiles/untitled.dir/Category.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/Category.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/Category.cpp" -o CMakeFiles/untitled.dir/Category.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/main.cpp.o" \
"CMakeFiles/untitled.dir/joke.cpp.o" \
"CMakeFiles/untitled.dir/jokeMgr.cpp.o" \
"CMakeFiles/untitled.dir/Category.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled: CMakeFiles/untitled.dir/main.cpp.o
untitled: CMakeFiles/untitled.dir/joke.cpp.o
untitled: CMakeFiles/untitled.dir/jokeMgr.cpp.o
untitled: CMakeFiles/untitled.dir/Category.cpp.o
untitled: CMakeFiles/untitled.dir/build.make
untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr" "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr" "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug" "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug" "/Users/kavipalmer/Desktop/Programming/GitHub Portfolio/jokeMgr/cmake-build-debug/CMakeFiles/untitled.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend
