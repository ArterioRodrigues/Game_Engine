#pragma once

#include "../ImplShader.h"

namespace Arc {
    class OpenGLShader: public ImplShader{
        public:
            OpenGLShader(const std::string&& vertexFile, const std::string&& fragmentFile);                    
            OpenGLShader( std::string&& vertexFile,  std::string&& fragmentFile);
            virtual void Activate() override;

        private: 
            unsigned int mProgram{0};
    };
}