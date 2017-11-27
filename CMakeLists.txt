cmake_minimum_required(VERSION 3.6)
project(ReversyTests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES src/BasicRules.cpp
        src/BasicRules.h
        src/Board.cpp
        src/Board.h
        src/ComputerPlayer.cpp
        src/ComputerPlayer.h
        src/ConsoleDisplayer.cpp
        src/ConsoleDisplayer.h
        src/ConsolePlayer.cpp
        src/ConsolePlayer.h
        src/Game.cpp
        src/Game.h
        src/IDisplayer.h
        src/IPlayer.cpp
        src/IPlayer.h
        src/IRules.h
        src/PlayerTypes.cpp
        src/PlayerTypes.h
        src/Point.cpp
        src/Point.h)

set(TEST_FILES tests/JustATest.cpp tests/BasicRulesTest.h "tests/ComputerPlayerTest.h" tests/BoardTest.h)

add_executable(ReversyTests ${SOURCE_FILES} ${TEST_FILES} tests/gtest_main.cpp)
add_executable(Reversy ${SOURCE_FILES} src/Reversy.cpp)
target_link_libraries(ReversyTests gtest gtest_main pthread)
add_test(ReversyTests ReversyTests)