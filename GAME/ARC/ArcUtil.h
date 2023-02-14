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
    int main() {                  \
        ClassName game;           \
        game.Run();               \ 
        return 0;                 \
    } 