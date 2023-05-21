#pragma once

namespace Arc {
    class ImplShader{
        public:
            virtual void Activate() = 0;

            virtual void Pass2DFloatValues(const std::string& name, float val1, float val2) = 0;            
            virtual void Pass2DFloatValues(std::string&& name, float val1, float val2) = 0;       
        
            virtual ~ImplShader() {};
    };
}