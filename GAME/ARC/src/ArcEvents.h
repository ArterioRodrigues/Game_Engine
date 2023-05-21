#pragma once 

#include "ArcUtil.h"

namespace Arc 
{
    class ARC_API KeyPressed {
        public:
            KeyPressed(int kCode);
            
            int GetKeyCode() const;
            
        private:
            int mKeyCode;
    };

    class ARC_API KeyReleased {
        public:
            KeyReleased(int kCode);
            
            int GetKeyCode() const;
            
        private:
            int mKeyCode;
    };

    class ARC_API WindowClosed {

    };
}