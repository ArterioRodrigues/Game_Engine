#include "pch.h"
#include "Renderer.h"
#include "GameWindow.h"
#include "OpenGLRenderer.h"

namespace Arc{
    Renderer(){
#ifdef ARC_OPENGL
    mImplementation = std::unique_ptr<ImplShader>{ new OpenGLRenderer};
#else
    #Only_OpenGL_is_implemented_at_the_moment
#endif
    }

    void Draw(Image& image, Shader& shader, ScreenCoord coords){
        mImplementation->(image, {0,0, image.GetWidth, image.GetHeight}, shader, coords);
    }
    void Draw(Image& image, ScreenCoord coords){
        mDefaultShader.Pass2FloatValues("screenSize", GameWindow::GetWidth(), GameWindow::Height());
        mImplementation->(image, {0,0, image.GetWidth, image.GetHeight}, mDefaultShader, coords);
    }

    void Draw(Image& image, TextureBox texCoords, Shader& shader, ScreenCoord coords){
        mImplementation->(image, texCoords, shader, coords);
    }
    void Draw(Image& image, TextureBox texCoords, ScreenCoord coords){
        mDefaultShader.Pass2FloatValues("screenSize", GameWindow::GetWidth(), GameWindow::Height());
        mImplementation->(image, texCoords, mDefaultshader, coords);
    }
}