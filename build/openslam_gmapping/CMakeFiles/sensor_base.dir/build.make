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
CMAKE_SOURCE_DIR = /home/tomer/cogrob_project/src/openslam_gmapping

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tomer/cogrob_project/build/openslam_gmapping

# Include any dependencies generated for this target.
include CMakeFiles/sensor_base.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sensor_base.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sensor_base.dir/flags.make

CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.o: CMakeFiles/sensor_base.dir/flags.make
CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.o: /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomer/cogrob_project/build/openslam_gmapping/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.o -c /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensor.cpp

CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensor.cpp > CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.i

CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensor.cpp -o CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.s

CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.o: CMakeFiles/sensor_base.dir/flags.make
CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.o: /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensorreading.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomer/cogrob_project/build/openslam_gmapping/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.o -c /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensorreading.cpp

CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensorreading.cpp > CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.i

CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tomer/cogrob_project/src/openslam_gmapping/sensor/sensor_base/sensorreading.cpp -o CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.s

# Object files for target sensor_base
sensor_base_OBJECTS = \
"CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.o" \
"CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.o"

# External object files for target sensor_base
sensor_base_EXTERNAL_OBJECTS =

/home/tomer/cogrob_project/devel/.private/openslam_gmapping/lib/libsensor_base.so: CMakeFiles/sensor_base.dir/sensor/sensor_base/sensor.cpp.o
/home/tomer/cogrob_project/devel/.private/openslam_gmapping/lib/libsensor_base.so: CMakeFiles/sensor_base.dir/sensor/sensor_base/sensorreading.cpp.o
/home/tomer/cogrob_project/devel/.private/openslam_gmapping/lib/libsensor_base.so: CMakeFiles/sensor_base.dir/build.make
/home/tomer/cogrob_project/devel/.private/openslam_gmapping/lib/libsensor_base.so: CMakeFiles/sensor_base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tomer/cogrob_project/build/openslam_gmapping/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library /home/tomer/cogrob_project/devel/.private/openslam_gmapping/lib/libsensor_base.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sensor_base.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sensor_base.dir/build: /home/tomer/cogrob_project/devel/.private/openslam_gmapping/lib/libsensor_base.so

.PHONY : CMakeFiles/sensor_base.dir/build

CMakeFiles/sensor_base.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sensor_base.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sensor_base.dir/clean

CMakeFiles/sensor_base.dir/depend:
	cd /home/tomer/cogrob_project/build/openslam_gmapping && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tomer/cogrob_project/src/openslam_gmapping /home/tomer/cogrob_project/src/openslam_gmapping /home/tomer/cogrob_project/build/openslam_gmapping /home/tomer/cogrob_project/build/openslam_gmapping /home/tomer/cogrob_project/build/openslam_gmapping/CMakeFiles/sensor_base.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sensor_base.dir/depend

