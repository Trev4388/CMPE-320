# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\trevo\CLionProjects\TheFractionClass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\trevo\CLionProjects\TheFractionClass\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TheFractionClass.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/TheFractionClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TheFractionClass.dir/flags.make

CMakeFiles/TheFractionClass.dir/FractionTest.cpp.obj: CMakeFiles/TheFractionClass.dir/flags.make
CMakeFiles/TheFractionClass.dir/FractionTest.cpp.obj: ../FractionTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\trevo\CLionProjects\TheFractionClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TheFractionClass.dir/FractionTest.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TheFractionClass.dir\FractionTest.cpp.obj -c C:\Users\trevo\CLionProjects\TheFractionClass\FractionTest.cpp

CMakeFiles/TheFractionClass.dir/FractionTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TheFractionClass.dir/FractionTest.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\trevo\CLionProjects\TheFractionClass\FractionTest.cpp > CMakeFiles\TheFractionClass.dir\FractionTest.cpp.i

CMakeFiles/TheFractionClass.dir/FractionTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TheFractionClass.dir/FractionTest.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\trevo\CLionProjects\TheFractionClass\FractionTest.cpp -o CMakeFiles\TheFractionClass.dir\FractionTest.cpp.s

CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.obj: CMakeFiles/TheFractionClass.dir/flags.make
CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.obj: ../fraction_18tk30.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\trevo\CLionProjects\TheFractionClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TheFractionClass.dir\fraction_18tk30.cpp.obj -c C:\Users\trevo\CLionProjects\TheFractionClass\fraction_18tk30.cpp

CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\trevo\CLionProjects\TheFractionClass\fraction_18tk30.cpp > CMakeFiles\TheFractionClass.dir\fraction_18tk30.cpp.i

CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\trevo\CLionProjects\TheFractionClass\fraction_18tk30.cpp -o CMakeFiles\TheFractionClass.dir\fraction_18tk30.cpp.s

# Object files for target TheFractionClass
TheFractionClass_OBJECTS = \
"CMakeFiles/TheFractionClass.dir/FractionTest.cpp.obj" \
"CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.obj"

# External object files for target TheFractionClass
TheFractionClass_EXTERNAL_OBJECTS =

TheFractionClass.exe: CMakeFiles/TheFractionClass.dir/FractionTest.cpp.obj
TheFractionClass.exe: CMakeFiles/TheFractionClass.dir/fraction_18tk30.cpp.obj
TheFractionClass.exe: CMakeFiles/TheFractionClass.dir/build.make
TheFractionClass.exe: CMakeFiles/TheFractionClass.dir/linklibs.rsp
TheFractionClass.exe: CMakeFiles/TheFractionClass.dir/objects1.rsp
TheFractionClass.exe: CMakeFiles/TheFractionClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\trevo\CLionProjects\TheFractionClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TheFractionClass.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TheFractionClass.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TheFractionClass.dir/build: TheFractionClass.exe
.PHONY : CMakeFiles/TheFractionClass.dir/build

CMakeFiles/TheFractionClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TheFractionClass.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TheFractionClass.dir/clean

CMakeFiles/TheFractionClass.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\trevo\CLionProjects\TheFractionClass C:\Users\trevo\CLionProjects\TheFractionClass C:\Users\trevo\CLionProjects\TheFractionClass\cmake-build-debug C:\Users\trevo\CLionProjects\TheFractionClass\cmake-build-debug C:\Users\trevo\CLionProjects\TheFractionClass\cmake-build-debug\CMakeFiles\TheFractionClass.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TheFractionClass.dir/depend
