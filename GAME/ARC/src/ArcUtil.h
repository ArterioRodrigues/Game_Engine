#pragma once

#ifdef ARC_WINDOWS
    #ifdef ARC_LIB
        #define ARC_API __declspec(dllexport)
    #else
        #define ARC_API __declspec(dllimport)
    #endif
#else
    #define ARC_API
#endif

#define ARC_GAME_START(ClassName) \
    int main() {\
        ClassName game;\
        game.Run();\
        return 0;\
    }

#if ARC_DEBUG==2
    #define ARC_LOG(x) std::clog<<"Log: "<<x<<std::endl;
    #define ARC_ERROR(x) std::cerr<<"ERROR: "<<x<<std::endl;
#elif ARC_DEBUG==1
    #define ARC_LOG(x)
    #define ARC_ERROR(x) std::cerr<<"ERROR: "<<x<<std::endl;
#else
    #define ARC_LOG(x)
    #define ARC_ERROR(x)
#endif