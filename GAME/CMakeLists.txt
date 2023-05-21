cmake_minimum_required(VERSION 3.24)

project(Spring23)


set(CAMKE_CXX_STANDARD 20)
set(CAMKE_CXX_STANDARD_REQUIRED True) 

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})



if(WIN32)
    add_definitions(-DARC_WINDOWS)
elseif(APPLE)
    add_definitions(-DARC_MACOS)
else()
    add_definitions(-DARC_LINUX)
endif()

add_subdirectory(glfw)
add_subdirectory(glad)
add_subdirectory(stbi)
add_subdirectory(ARC)
add_subdirectory(S23_GAME)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT S23_GAME)

file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR})
file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR}/Debug)
file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR}/Release)