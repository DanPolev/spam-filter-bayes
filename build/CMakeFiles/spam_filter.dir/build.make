# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/dan/Homework/Algorithms/SpamFilter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dan/Homework/Algorithms/SpamFilter/build

# Include any dependencies generated for this target.
include CMakeFiles/spam_filter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/spam_filter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spam_filter.dir/flags.make

CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o: CMakeFiles/spam_filter.dir/flags.make
CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o: ../src/spam_filter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dan/Homework/Algorithms/SpamFilter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o -c /home/dan/Homework/Algorithms/SpamFilter/src/spam_filter.cpp

CMakeFiles/spam_filter.dir/src/spam_filter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spam_filter.dir/src/spam_filter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dan/Homework/Algorithms/SpamFilter/src/spam_filter.cpp > CMakeFiles/spam_filter.dir/src/spam_filter.cpp.i

CMakeFiles/spam_filter.dir/src/spam_filter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spam_filter.dir/src/spam_filter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dan/Homework/Algorithms/SpamFilter/src/spam_filter.cpp -o CMakeFiles/spam_filter.dir/src/spam_filter.cpp.s

CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.requires:

.PHONY : CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.requires

CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.provides: CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.requires
	$(MAKE) -f CMakeFiles/spam_filter.dir/build.make CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.provides.build
.PHONY : CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.provides

CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.provides.build: CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o


CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o: CMakeFiles/spam_filter.dir/flags.make
CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o: ../src/naive_bayes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dan/Homework/Algorithms/SpamFilter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o -c /home/dan/Homework/Algorithms/SpamFilter/src/naive_bayes.cpp

CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dan/Homework/Algorithms/SpamFilter/src/naive_bayes.cpp > CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.i

CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dan/Homework/Algorithms/SpamFilter/src/naive_bayes.cpp -o CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.s

CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.requires:

.PHONY : CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.requires

CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.provides: CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.requires
	$(MAKE) -f CMakeFiles/spam_filter.dir/build.make CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.provides.build
.PHONY : CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.provides

CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.provides.build: CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o


CMakeFiles/spam_filter.dir/src/str_transform.cpp.o: CMakeFiles/spam_filter.dir/flags.make
CMakeFiles/spam_filter.dir/src/str_transform.cpp.o: ../src/str_transform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dan/Homework/Algorithms/SpamFilter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/spam_filter.dir/src/str_transform.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spam_filter.dir/src/str_transform.cpp.o -c /home/dan/Homework/Algorithms/SpamFilter/src/str_transform.cpp

CMakeFiles/spam_filter.dir/src/str_transform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spam_filter.dir/src/str_transform.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dan/Homework/Algorithms/SpamFilter/src/str_transform.cpp > CMakeFiles/spam_filter.dir/src/str_transform.cpp.i

CMakeFiles/spam_filter.dir/src/str_transform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spam_filter.dir/src/str_transform.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dan/Homework/Algorithms/SpamFilter/src/str_transform.cpp -o CMakeFiles/spam_filter.dir/src/str_transform.cpp.s

CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.requires:

.PHONY : CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.requires

CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.provides: CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.requires
	$(MAKE) -f CMakeFiles/spam_filter.dir/build.make CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.provides.build
.PHONY : CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.provides

CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.provides.build: CMakeFiles/spam_filter.dir/src/str_transform.cpp.o


# Object files for target spam_filter
spam_filter_OBJECTS = \
"CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o" \
"CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o" \
"CMakeFiles/spam_filter.dir/src/str_transform.cpp.o"

# External object files for target spam_filter
spam_filter_EXTERNAL_OBJECTS =

spam_filter: CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o
spam_filter: CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o
spam_filter: CMakeFiles/spam_filter.dir/src/str_transform.cpp.o
spam_filter: CMakeFiles/spam_filter.dir/build.make
spam_filter: CMakeFiles/spam_filter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dan/Homework/Algorithms/SpamFilter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable spam_filter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spam_filter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spam_filter.dir/build: spam_filter

.PHONY : CMakeFiles/spam_filter.dir/build

CMakeFiles/spam_filter.dir/requires: CMakeFiles/spam_filter.dir/src/spam_filter.cpp.o.requires
CMakeFiles/spam_filter.dir/requires: CMakeFiles/spam_filter.dir/src/naive_bayes.cpp.o.requires
CMakeFiles/spam_filter.dir/requires: CMakeFiles/spam_filter.dir/src/str_transform.cpp.o.requires

.PHONY : CMakeFiles/spam_filter.dir/requires

CMakeFiles/spam_filter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/spam_filter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/spam_filter.dir/clean

CMakeFiles/spam_filter.dir/depend:
	cd /home/dan/Homework/Algorithms/SpamFilter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dan/Homework/Algorithms/SpamFilter /home/dan/Homework/Algorithms/SpamFilter /home/dan/Homework/Algorithms/SpamFilter/build /home/dan/Homework/Algorithms/SpamFilter/build /home/dan/Homework/Algorithms/SpamFilter/build/CMakeFiles/spam_filter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spam_filter.dir/depend
