#pragma once

namespace Arc {
    class ImplShader{
        public:
            virtual void Activate() = 0;

                    
        
            virtual ~ImplShader() {};
    };
}