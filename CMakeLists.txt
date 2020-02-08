cmake_minimum_required(VERSION 3.14)
project(MIDI2KB CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BUILD_TYPE RELEASE)

add_executable(MIDI2KB main.cpp KeyMap.h KeyEvent.h KeyMapper.cpp KeyMapper.h Parsing/KeyMapList.cpp Parsing/KeyMapList.h
        Parsing/Grammar/KeyMapsLexer.h Parsing/Grammar/KeyMapsLexer.cpp
        Parsing/Grammar/KeyMapsParser.h Parsing/Grammar/KeyMapsParser.cpp)

include_directories(libs/common)
include_directories(libs/common/antlr4-runtime/runtime/src/)

if (UNIX)
    target_link_libraries(MIDI2KB xdo)
    target_link_libraries(MIDI2KB rtmidi)

    add_definitions(-DANTLR4CPP_STATIC)
    target_link_libraries(MIDI2KB antlr4-runtime)
endif (UNIX)



if(WIN32)
    include_directories(MIDI2KB libs/win/)

    target_link_libraries(MIDI2KB ${CMAKE_SOURCE_DIR}/libs/win/rtmidi/lib/rtmidi.lib)

    target_link_libraries(MIDI2KB ${CMAKE_SOURCE_DIR}/libs/win/antlr4-runtimelib/x86/Release\ DLL/antlr4-runtime.lib)
    target_link_libraries(MIDI2KB winmm.lib)
endif()