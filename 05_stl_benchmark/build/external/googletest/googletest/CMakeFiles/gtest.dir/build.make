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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build

# Include any dependencies generated for this target.
include external/googletest/googletest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include external/googletest/googletest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include external/googletest/googletest/CMakeFiles/gtest.dir/flags.make

external/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: external/googletest/googletest/CMakeFiles/gtest.dir/flags.make
external/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: ../external/googletest/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object external/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/external/googletest/googletest/src/gtest-all.cc

external/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/external/googletest/googletest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

external/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/external/googletest/googletest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

lib/libgtest.a: external/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
lib/libgtest.a: external/googletest/googletest/CMakeFiles/gtest.dir/build.make
lib/libgtest.a: external/googletest/googletest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libgtest.a"
	cd /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/googletest/googletest/CMakeFiles/gtest.dir/build: lib/libgtest.a

.PHONY : external/googletest/googletest/CMakeFiles/gtest.dir/build

external/googletest/googletest/CMakeFiles/gtest.dir/clean:
	cd /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : external/googletest/googletest/CMakeFiles/gtest.dir/clean

external/googletest/googletest/CMakeFiles/gtest.dir/depend:
	cd /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/external/googletest/googletest /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest /home/m-debian/Documents/Semestr_5/OOP/oop_2019_g2/05_stl_benchmark/build/external/googletest/googletest/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/googletest/googletest/CMakeFiles/gtest.dir/depend
