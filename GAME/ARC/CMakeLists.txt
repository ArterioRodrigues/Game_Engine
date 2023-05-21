set(HEADER_FILES
    src/ArcUtil.h
    src/ArcApp.h
    src/GameWindow.h
    src/WindowImplementation.h
    src/GLFWcode/GLFWimplementation.h
    src/Renderer.h
    src/ImplRenderer.h
    src/OpenGLCode/OpenGLRenderer.h
    src/RendererTypes.h
    src/Shader.h
    src/ImplShader.h
    src/OpenGLCode/OpenGLShader.h
    src/Image.h
    src/ImplImage.h
    src/OpenGLCode/OpenGLImage.h
    src/Unit.h
    src/RenderTypes.h
    src/ArcEvents.h
    src/ArcKeys.h
    )

set(SOURCE_FILES 
    src/ArcApp.cpp
    src/GameWindow.cpp
    src/GLFWcode/GLFWimplementation.cpp
    src/Renderer.cpp
    src/OpenGLCode/OpenGLRenderer.cpp
    src/Shader.cpp
    src/OpenGLCode/OpenGLShader.cpp
    src/Image.cpp
    src/OpenGLCode/OpenGLImage.cpp
    src/Unit.cpp
    src/ArcEvents.cpp
    )

add_library(ARC SHARED ${HEADER_FILES} ${SOURCE_FILES})

include_directories(src)
include_directories(../glad/include)
include_directories(../stbi)
include_directories(../glfw/inlcude)


target_precompile_headers(ARC PRIVATE src/pch.h)


target_link_libraries(ARC glfw glad stbi)

add_definitions(-DARC_LIB)
add_definitions(-DARC_GLFW)
add_definitions(-DARC_OPENGL)
add_definitions(-DARC_WINDOWS)
add_definitions(-DARC_DEBUG=2)
