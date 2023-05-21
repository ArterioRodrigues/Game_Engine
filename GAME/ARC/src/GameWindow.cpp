#include "pch.h"
#include "GameWindow.h"

namespace Arc {
    void GameWindow::Init(){
        if(!mInstance)
            mInstance = std::unique_ptr<GameWindow>(new GameWindow);
    }

    std::unique_ptr<GameWindow>& GameWindow::GetWindow(){
        return mInstance;
    }

    void GameWindow::CreateWindow(int width, int height, const std::string& windowName){
        mInstance->mImplementation->CreateWindow(width, height, windowName);
    }

    void GameWindow::CreateWindow(int width, int height, std::string&& windowName){
        mInstance->mImplementation->CreateWindow(width, height, std::move(windowName));
    }

    int GameWindow::GetWidth(){
        return mInstance->mImplementation->GetWidth();
    }

    int GameWindow::GetHeight(){
        return mInstance->mImplementation->GetHeight();
    }

    void GameWindow::SwapBuffers(){
        mInstance->mImplementation->SwapBuffers();
    }

    void GameWindow::PollEvents(){
        mInstance->mImplementation->PollEvents();
    }

    
    GameWindow::GameWindow(){
#ifdef ARC_GLFW
        mImplementation = new GLFWimplementation;

#endif
    }

    GameWindow::~GameWindow(){
        if(mInstance->mImplementation != nullptr)
            delete mInstance->mImplementation;
    }

    void GameWindow::SetKeyPressedCallback(std::function<void(const KeyPressed&)> callbackFunc){
        mImplementation->SetKeyPressedCallback(callbackFunc);
    }

    void GameWindow::SetKeyReleasedCallback(std::function<void(const KeyReleased&)> callbackFunc){
        mImplementation->SetKeyReleasedCallback(callbackFunc);
    }

    void GameWindow::SetWindowCloseCallback(std::function<void()> callbackFunc){
        mImplementation->SetWindowCloseCallback(callbackFunc);
    }
};

