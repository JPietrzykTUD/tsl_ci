# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only

# Include any dependencies generated for this target.
include sse_only/build/src/test/CMakeFiles/tsl_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.make

# Include the progress variables for this target.
include sse_only/build/src/test/CMakeFiles/tsl_test.dir/progress.make

# Include the compile flags for this target's objects.
include sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make

sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.o: sse_only/src/test/catch_manager.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.o -MF CMakeFiles/tsl_test.dir/catch_manager.cpp.o.d -o CMakeFiles/tsl_test.dir/catch_manager.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/catch_manager.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/catch_manager.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/catch_manager.cpp > CMakeFiles/tsl_test.dir/catch_manager.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/catch_manager.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/catch_manager.cpp -o CMakeFiles/tsl_test.dir/catch_manager.cpp.s

sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o: sse_only/src/test/misc_unit_test.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o -MF CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o.d -o CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/misc_unit_test.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/misc_unit_test.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/misc_unit_test.cpp > CMakeFiles/tsl_test.dir/misc_unit_test.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/misc_unit_test.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/misc_unit_test.cpp -o CMakeFiles/tsl_test.dir/misc_unit_test.cpp.s

sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o: sse_only/src/test/convert_unit_test.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o -MF CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o.d -o CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/convert_unit_test.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/convert_unit_test.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/convert_unit_test.cpp > CMakeFiles/tsl_test.dir/convert_unit_test.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/convert_unit_test.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/convert_unit_test.cpp -o CMakeFiles/tsl_test.dir/convert_unit_test.cpp.s

sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o: sse_only/src/test/binary_unit_test.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o -MF CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o.d -o CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/binary_unit_test.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/binary_unit_test.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/binary_unit_test.cpp > CMakeFiles/tsl_test.dir/binary_unit_test.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/binary_unit_test.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/binary_unit_test.cpp -o CMakeFiles/tsl_test.dir/binary_unit_test.cpp.s

sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o: sse_only/src/test/compare_unit_test.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o -MF CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o.d -o CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/compare_unit_test.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/compare_unit_test.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/compare_unit_test.cpp > CMakeFiles/tsl_test.dir/compare_unit_test.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/compare_unit_test.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/compare_unit_test.cpp -o CMakeFiles/tsl_test.dir/compare_unit_test.cpp.s

sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o: sse_only/src/test/mask_unit_test.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o -MF CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o.d -o CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/mask_unit_test.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/mask_unit_test.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/mask_unit_test.cpp > CMakeFiles/tsl_test.dir/mask_unit_test.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/mask_unit_test.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/mask_unit_test.cpp -o CMakeFiles/tsl_test.dir/mask_unit_test.cpp.s

sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o: sse_only/src/test/ls_unit_test.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o -MF CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o.d -o CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/ls_unit_test.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/ls_unit_test.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/ls_unit_test.cpp > CMakeFiles/tsl_test.dir/ls_unit_test.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/ls_unit_test.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/ls_unit_test.cpp -o CMakeFiles/tsl_test.dir/ls_unit_test.cpp.s

sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/flags.make
sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o: sse_only/src/test/calc_unit_test.cpp
sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o -MF CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o.d -o CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o -c /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/calc_unit_test.cpp

sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsl_test.dir/calc_unit_test.cpp.i"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/calc_unit_test.cpp > CMakeFiles/tsl_test.dir/calc_unit_test.cpp.i

sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsl_test.dir/calc_unit_test.cpp.s"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test/calc_unit_test.cpp -o CMakeFiles/tsl_test.dir/calc_unit_test.cpp.s

# Object files for target tsl_test
tsl_test_OBJECTS = \
"CMakeFiles/tsl_test.dir/catch_manager.cpp.o" \
"CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o" \
"CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o" \
"CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o" \
"CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o" \
"CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o" \
"CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o" \
"CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o"

# External object files for target tsl_test
tsl_test_EXTERNAL_OBJECTS =

sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/catch_manager.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/misc_unit_test.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/convert_unit_test.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/binary_unit_test.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/compare_unit_test.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/mask_unit_test.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/ls_unit_test.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/calc_unit_test.cpp.o
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/build.make
sse_only/build/src/test/tsl_test: sse_only/build/src/test/CMakeFiles/tsl_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable tsl_test"
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tsl_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sse_only/build/src/test/CMakeFiles/tsl_test.dir/build: sse_only/build/src/test/tsl_test
.PHONY : sse_only/build/src/test/CMakeFiles/tsl_test.dir/build

sse_only/build/src/test/CMakeFiles/tsl_test.dir/clean:
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test && $(CMAKE_COMMAND) -P CMakeFiles/tsl_test.dir/cmake_clean.cmake
.PHONY : sse_only/build/src/test/CMakeFiles/tsl_test.dir/clean

sse_only/build/src/test/CMakeFiles/tsl_test.dir/depend:
	cd /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/src/test /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/build_sse_only/sse_only/build/src/test/CMakeFiles/tsl_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : sse_only/build/src/test/CMakeFiles/tsl_test.dir/depend

