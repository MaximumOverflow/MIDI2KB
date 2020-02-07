cmake_minimum_required(VERSION 3.14)
project(MIDI2KB CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

add_executable(MIDI2KB main.cpp KeyMap.h KeyEvent.h KeyMapper.cpp KeyMapper.h)

if (UNIX)
    target_link_libraries(MIDI2KB xdo)
    target_link_libraries(MIDI2KB rtmidi)
endif (UNIX)



if(WIN32)
    include_directories(MIDI2KB winlibs)

    target_link_libraries(MIDI2KB ${CMAKE_SOURCE_DIR}/winlibs/rtmidi/lib/rtmidid.lib)
    target_link_libraries(MIDI2KB winmm.lib)
endif()