# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\0311_Target\0311_VCS\Project3_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\0311_Target\0311_VCS\Project3_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Prokect3_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Prokect3_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Prokect3_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Prokect3_1.dir/flags.make

CMakeFiles/Prokect3_1.dir/main.cpp.obj: CMakeFiles/Prokect3_1.dir/flags.make
CMakeFiles/Prokect3_1.dir/main.cpp.obj: D:/Code/0311_Target/0311_VCS/Project3_1/main.cpp
CMakeFiles/Prokect3_1.dir/main.cpp.obj: CMakeFiles/Prokect3_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\0311_Target\0311_VCS\Project3_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Prokect3_1.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Prokect3_1.dir/main.cpp.obj -MF CMakeFiles\Prokect3_1.dir\main.cpp.obj.d -o CMakeFiles\Prokect3_1.dir\main.cpp.obj -c D:\Code\0311_Target\0311_VCS\Project3_1\main.cpp

CMakeFiles/Prokect3_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Prokect3_1.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\0311_Target\0311_VCS\Project3_1\main.cpp > CMakeFiles\Prokect3_1.dir\main.cpp.i

CMakeFiles/Prokect3_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Prokect3_1.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\0311_Target\0311_VCS\Project3_1\main.cpp -o CMakeFiles\Prokect3_1.dir\main.cpp.s

# Object files for target Prokect3_1
Prokect3_1_OBJECTS = \
"CMakeFiles/Prokect3_1.dir/main.cpp.obj"

# External object files for target Prokect3_1
Prokect3_1_EXTERNAL_OBJECTS =

Prokect3_1.exe: CMakeFiles/Prokect3_1.dir/main.cpp.obj
Prokect3_1.exe: CMakeFiles/Prokect3_1.dir/build.make
Prokect3_1.exe: CMakeFiles/Prokect3_1.dir/linkLibs.rsp
Prokect3_1.exe: CMakeFiles/Prokect3_1.dir/objects1
Prokect3_1.exe: CMakeFiles/Prokect3_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\0311_Target\0311_VCS\Project3_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Prokect3_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Prokect3_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Prokect3_1.dir/build: Prokect3_1.exe
.PHONY : CMakeFiles/Prokect3_1.dir/build

CMakeFiles/Prokect3_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Prokect3_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Prokect3_1.dir/clean

CMakeFiles/Prokect3_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\0311_Target\0311_VCS\Project3_1 D:\Code\0311_Target\0311_VCS\Project3_1 D:\Code\0311_Target\0311_VCS\Project3_1\cmake-build-debug D:\Code\0311_Target\0311_VCS\Project3_1\cmake-build-debug D:\Code\0311_Target\0311_VCS\Project3_1\cmake-build-debug\CMakeFiles\Prokect3_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Prokect3_1.dir/depend

