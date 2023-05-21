#pragma once

#include "pch.h"
#include "ArcUtil.h"
#include "ImplShader.h"

namespace Ard {
    class ARC_API Shader{
        public:
            Shader(const std::string& vertexFile, const std::string& fragmentFile);
            Shader(std::string&& vertexFile, std::string&& fragmentFile);
            void Shader::Activate();
        
        private:
            std::unique_ptr<ImplShader> mImplementation;

    }
    
}