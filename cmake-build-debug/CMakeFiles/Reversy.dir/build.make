# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/omer/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/omer/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/omer/CLionProjects/ReversyTests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/omer/CLionProjects/ReversyTests/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Reversy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Reversy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Reversy.dir/flags.make

CMakeFiles/Reversy.dir/src/BasicRules.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/BasicRules.cpp.o: ../src/BasicRules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Reversy.dir/src/BasicRules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/BasicRules.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/BasicRules.cpp

CMakeFiles/Reversy.dir/src/BasicRules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/BasicRules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/BasicRules.cpp > CMakeFiles/Reversy.dir/src/BasicRules.cpp.i

CMakeFiles/Reversy.dir/src/BasicRules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/BasicRules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/BasicRules.cpp -o CMakeFiles/Reversy.dir/src/BasicRules.cpp.s

CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.requires

CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.provides: CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.provides

CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/BasicRules.cpp.o


CMakeFiles/Reversy.dir/src/Board.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/Board.cpp.o: ../src/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Reversy.dir/src/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/Board.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/Board.cpp

CMakeFiles/Reversy.dir/src/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/Board.cpp > CMakeFiles/Reversy.dir/src/Board.cpp.i

CMakeFiles/Reversy.dir/src/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/Board.cpp -o CMakeFiles/Reversy.dir/src/Board.cpp.s

CMakeFiles/Reversy.dir/src/Board.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/Board.cpp.o.requires

CMakeFiles/Reversy.dir/src/Board.cpp.o.provides: CMakeFiles/Reversy.dir/src/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/Board.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/Board.cpp.o.provides

CMakeFiles/Reversy.dir/src/Board.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/Board.cpp.o


CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o: ../src/ComputerPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/ComputerPlayer.cpp

CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/ComputerPlayer.cpp > CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.i

CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/ComputerPlayer.cpp -o CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.s

CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.requires

CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.provides: CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.provides

CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o


CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o: ../src/ConsoleDisplayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/ConsoleDisplayer.cpp

CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/ConsoleDisplayer.cpp > CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.i

CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/ConsoleDisplayer.cpp -o CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.s

CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.requires

CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.provides: CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.provides

CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o


CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o: ../src/ConsolePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/ConsolePlayer.cpp

CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/ConsolePlayer.cpp > CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.i

CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/ConsolePlayer.cpp -o CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.s

CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.requires

CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.provides: CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.provides

CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o


CMakeFiles/Reversy.dir/src/Game.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Reversy.dir/src/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/Game.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/Game.cpp

CMakeFiles/Reversy.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/Game.cpp > CMakeFiles/Reversy.dir/src/Game.cpp.i

CMakeFiles/Reversy.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/Game.cpp -o CMakeFiles/Reversy.dir/src/Game.cpp.s

CMakeFiles/Reversy.dir/src/Game.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/Game.cpp.o.requires

CMakeFiles/Reversy.dir/src/Game.cpp.o.provides: CMakeFiles/Reversy.dir/src/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/Game.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/Game.cpp.o.provides

CMakeFiles/Reversy.dir/src/Game.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/Game.cpp.o


CMakeFiles/Reversy.dir/src/IPlayer.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/IPlayer.cpp.o: ../src/IPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Reversy.dir/src/IPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/IPlayer.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/IPlayer.cpp

CMakeFiles/Reversy.dir/src/IPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/IPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/IPlayer.cpp > CMakeFiles/Reversy.dir/src/IPlayer.cpp.i

CMakeFiles/Reversy.dir/src/IPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/IPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/IPlayer.cpp -o CMakeFiles/Reversy.dir/src/IPlayer.cpp.s

CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.requires

CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.provides: CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.provides

CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/IPlayer.cpp.o


CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o: ../src/PlayerTypes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/PlayerTypes.cpp

CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/PlayerTypes.cpp > CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.i

CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/PlayerTypes.cpp -o CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.s

CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.requires

CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.provides: CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.provides

CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o


CMakeFiles/Reversy.dir/src/Point.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/Point.cpp.o: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Reversy.dir/src/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/Point.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/Point.cpp

CMakeFiles/Reversy.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/Point.cpp > CMakeFiles/Reversy.dir/src/Point.cpp.i

CMakeFiles/Reversy.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/Point.cpp -o CMakeFiles/Reversy.dir/src/Point.cpp.s

CMakeFiles/Reversy.dir/src/Point.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/Point.cpp.o.requires

CMakeFiles/Reversy.dir/src/Point.cpp.o.provides: CMakeFiles/Reversy.dir/src/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/Point.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/Point.cpp.o.provides

CMakeFiles/Reversy.dir/src/Point.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/Point.cpp.o


CMakeFiles/Reversy.dir/src/Reversy.cpp.o: CMakeFiles/Reversy.dir/flags.make
CMakeFiles/Reversy.dir/src/Reversy.cpp.o: ../src/Reversy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Reversy.dir/src/Reversy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Reversy.dir/src/Reversy.cpp.o -c /home/omer/CLionProjects/ReversyTests/src/Reversy.cpp

CMakeFiles/Reversy.dir/src/Reversy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Reversy.dir/src/Reversy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omer/CLionProjects/ReversyTests/src/Reversy.cpp > CMakeFiles/Reversy.dir/src/Reversy.cpp.i

CMakeFiles/Reversy.dir/src/Reversy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Reversy.dir/src/Reversy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omer/CLionProjects/ReversyTests/src/Reversy.cpp -o CMakeFiles/Reversy.dir/src/Reversy.cpp.s

CMakeFiles/Reversy.dir/src/Reversy.cpp.o.requires:

.PHONY : CMakeFiles/Reversy.dir/src/Reversy.cpp.o.requires

CMakeFiles/Reversy.dir/src/Reversy.cpp.o.provides: CMakeFiles/Reversy.dir/src/Reversy.cpp.o.requires
	$(MAKE) -f CMakeFiles/Reversy.dir/build.make CMakeFiles/Reversy.dir/src/Reversy.cpp.o.provides.build
.PHONY : CMakeFiles/Reversy.dir/src/Reversy.cpp.o.provides

CMakeFiles/Reversy.dir/src/Reversy.cpp.o.provides.build: CMakeFiles/Reversy.dir/src/Reversy.cpp.o


# Object files for target Reversy
Reversy_OBJECTS = \
"CMakeFiles/Reversy.dir/src/BasicRules.cpp.o" \
"CMakeFiles/Reversy.dir/src/Board.cpp.o" \
"CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o" \
"CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o" \
"CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o" \
"CMakeFiles/Reversy.dir/src/Game.cpp.o" \
"CMakeFiles/Reversy.dir/src/IPlayer.cpp.o" \
"CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o" \
"CMakeFiles/Reversy.dir/src/Point.cpp.o" \
"CMakeFiles/Reversy.dir/src/Reversy.cpp.o"

# External object files for target Reversy
Reversy_EXTERNAL_OBJECTS =

Reversy: CMakeFiles/Reversy.dir/src/BasicRules.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/Board.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/Game.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/IPlayer.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/Point.cpp.o
Reversy: CMakeFiles/Reversy.dir/src/Reversy.cpp.o
Reversy: CMakeFiles/Reversy.dir/build.make
Reversy: CMakeFiles/Reversy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable Reversy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Reversy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Reversy.dir/build: Reversy

.PHONY : CMakeFiles/Reversy.dir/build

CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/BasicRules.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/Board.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/ComputerPlayer.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/ConsoleDisplayer.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/ConsolePlayer.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/Game.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/IPlayer.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/PlayerTypes.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/Point.cpp.o.requires
CMakeFiles/Reversy.dir/requires: CMakeFiles/Reversy.dir/src/Reversy.cpp.o.requires

.PHONY : CMakeFiles/Reversy.dir/requires

CMakeFiles/Reversy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Reversy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Reversy.dir/clean

CMakeFiles/Reversy.dir/depend:
	cd /home/omer/CLionProjects/ReversyTests/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/omer/CLionProjects/ReversyTests /home/omer/CLionProjects/ReversyTests /home/omer/CLionProjects/ReversyTests/cmake-build-debug /home/omer/CLionProjects/ReversyTests/cmake-build-debug /home/omer/CLionProjects/ReversyTests/cmake-build-debug/CMakeFiles/Reversy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Reversy.dir/depend
