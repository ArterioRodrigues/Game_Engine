set(HEADER_FILES
    src/ArcUtil.h
    src/ArcApp.h
    src/GameWindow.h
    src/WindowImplementation.h
    src/GLFWcode/GLFWimplementation.h
)

set(SOURCE_FILES 
    src/ArcApp.cpp
    src/GameWindow.cpp
    src/GLFWcode/GLFWimplementation.cpp
)

add_library(ARC SHARED ${HEADER_FILES} ${SOURCE_FILES})

include_directories(src)

target_precompile_headers(ARC PRIVATE src/pch.h)


target_link_libraries(ARC glfw)

add_definitions(-DARC_LIB)
add_definitions(-DARC_GLFW)
