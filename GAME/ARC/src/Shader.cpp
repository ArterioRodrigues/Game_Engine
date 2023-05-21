#include "pch.h"
#include "Shader.h"
#include "OpenGLCode/OpenGLShader.h"

namespace Arc {
    Shader::Shader(const std::string& vertexFile, const  std::string& fragmentFile){
    #ifdef ARC_OPENGL
        mImplementation = std::unique_ptr<ImplShader>{new OpenGLShader{vertexFile, fragmentFile}};
    #else
        #Only_OpenGL_is_implemented_at_the_moment
    #endif
    }

    void Shader::Activate(){
        mImplementation->Activate();
    }
}