#include "../ARC/include/Arc.h"
#include <iostream>


class S23_Game_App : public Arc::ArcApp {

    public:
        S23_Game_App() {
            Arc::GameWindow::Init();
            Arc::GameWindow::CreateWindow(800, 600, "Test_name");
        }

        virtual void OnUpdate() override {
            std::cout << "Hey it works kinds..." << std::endl;

            Arc::GameWindow::SwapBuffers();
            Arc::GameWindow::PollEvents();
        }


};

ARC_GAME_START(S23_Game_App);

