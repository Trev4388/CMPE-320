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
CMAKE_SOURCE_DIR = C:\Users\trevo\CLionProjects\StructuralImprovements

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StructuralImprovements.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/StructuralImprovements.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StructuralImprovements.dir/flags.make

CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.obj: CMakeFiles/StructuralImprovements.dir/flags.make
CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.obj: ../ShapesBad.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StructuralImprovements.dir\ShapesBad.cpp.obj -c C:\Users\trevo\CLionProjects\StructuralImprovements\ShapesBad.cpp

CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\trevo\CLionProjects\StructuralImprovements\ShapesBad.cpp > CMakeFiles\StructuralImprovements.dir\ShapesBad.cpp.i

CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\trevo\CLionProjects\StructuralImprovements\ShapesBad.cpp -o CMakeFiles\StructuralImprovements.dir\ShapesBad.cpp.s

CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.obj: CMakeFiles/StructuralImprovements.dir/flags.make
CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.obj: ../TestBadShapes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StructuralImprovements.dir\TestBadShapes.cpp.obj -c C:\Users\trevo\CLionProjects\StructuralImprovements\TestBadShapes.cpp

CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\trevo\CLionProjects\StructuralImprovements\TestBadShapes.cpp > CMakeFiles\StructuralImprovements.dir\TestBadShapes.cpp.i

CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\trevo\CLionProjects\StructuralImprovements\TestBadShapes.cpp -o CMakeFiles\StructuralImprovements.dir\TestBadShapes.cpp.s

CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.obj: CMakeFiles/StructuralImprovements.dir/flags.make
CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.obj: ../TestGoodShapes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StructuralImprovements.dir\TestGoodShapes.cpp.obj -c C:\Users\trevo\CLionProjects\StructuralImprovements\TestGoodShapes.cpp

CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\trevo\CLionProjects\StructuralImprovements\TestGoodShapes.cpp > CMakeFiles\StructuralImprovements.dir\TestGoodShapes.cpp.i

CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\trevo\CLionProjects\StructuralImprovements\TestGoodShapes.cpp -o CMakeFiles\StructuralImprovements.dir\TestGoodShapes.cpp.s

CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.obj: CMakeFiles/StructuralImprovements.dir/flags.make
CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.obj: ../ShapesGood.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.obj"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StructuralImprovements.dir\ShapesGood.cpp.obj -c C:\Users\trevo\CLionProjects\StructuralImprovements\ShapesGood.cpp

CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.i"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\trevo\CLionProjects\StructuralImprovements\ShapesGood.cpp > CMakeFiles\StructuralImprovements.dir\ShapesGood.cpp.i

CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.s"
	C:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\trevo\CLionProjects\StructuralImprovements\ShapesGood.cpp -o CMakeFiles\StructuralImprovements.dir\ShapesGood.cpp.s

# Object files for target StructuralImprovements
StructuralImprovements_OBJECTS = \
"CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.obj" \
"CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.obj" \
"CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.obj" \
"CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.obj"

# External object files for target StructuralImprovements
StructuralImprovements_EXTERNAL_OBJECTS =

StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/ShapesBad.cpp.obj
StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/TestBadShapes.cpp.obj
StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/TestGoodShapes.cpp.obj
StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/ShapesGood.cpp.obj
StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/build.make
StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/linklibs.rsp
StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/objects1.rsp
StructuralImprovements.exe: CMakeFiles/StructuralImprovements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable StructuralImprovements.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StructuralImprovements.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StructuralImprovements.dir/build: StructuralImprovements.exe
.PHONY : CMakeFiles/StructuralImprovements.dir/build

CMakeFiles/StructuralImprovements.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StructuralImprovements.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StructuralImprovements.dir/clean

CMakeFiles/StructuralImprovements.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\trevo\CLionProjects\StructuralImprovements C:\Users\trevo\CLionProjects\StructuralImprovements C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug C:\Users\trevo\CLionProjects\StructuralImprovements\cmake-build-debug\CMakeFiles\StructuralImprovements.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StructuralImprovements.dir/depend

