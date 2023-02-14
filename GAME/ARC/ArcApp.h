#pragma once

#include "ArcUtil.hpp"


namespace Arc {
    class ARC_API ArcApp {
    public:
        virtual void OnUpdate(); 
        void Run();

    private:

    };
}