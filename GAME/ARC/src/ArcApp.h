#pragma once

#include "ArcUtil.h"


namespace Arc {
    class ARC_API ArcApp {
        public:
            virtual void OnUpdate() = 0; 
            void Run();

        private:

    };
}