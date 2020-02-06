cmake_minimum_required(VERSION 3.14)
project(MIDI2KB CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

add_executable(MIDI2KB main.cpp)

target_link_libraries(MIDI2KB xdo)
target_link_libraries(MIDI2KB rtmidi)