#pragma once

#include "pch.h"
#include "ArcUtil.h"
#include "ImplShader.h"

namespace Arc {
    class ARC_API Shader{
        public:
            Shader(const std::string& vertexFile, const std::string& fragmentFile);
            Shader(std::string&& vertexFile, std::string&& fragmentFile);

            void Shader::Activate();

            void Pass2DFloatValues(const std::string& name, float val1, float val2);            
            void Pass2DFloatValues(std::string&& name, float val1, float val2);      
        private:
            std::unique_ptr<ImplShader> mImplementation;

    };
    
}