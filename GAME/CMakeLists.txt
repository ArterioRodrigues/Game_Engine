cmake_minimum_required(VERSION 3.24)

project(Spring23)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True) 

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(ARC)
add_subdirectory(S23_Game)

if(WIN32)
    add_definitions(-DARC_WINDOWS)
elseif(APPLE)
    add_definitions(-DARC_MACOS)
else()
    add_definitions(-DARC_LINUX)
endif()

add_subdirectory(glfw)
add_subdirectory(ARC)
add_subdirectory(S23_GAME)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT S23_GAME)