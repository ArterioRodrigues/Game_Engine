#include "../ARC/include/Arc.h"
#include <iostream>


class S23_Game_App : public Arc::ArcApp {

    public:

        virtual void OnUpdate() override {
            std::cout << "Hey it works kinds..." << std::endl;
        }
};

ARC_GAME_START(S23_Game_App);

