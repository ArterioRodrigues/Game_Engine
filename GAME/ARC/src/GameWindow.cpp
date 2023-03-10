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
        mInstance->mImplementation->CreateWindow(width, height, windowName);
    }

    int GameWindow::GetWidth(){
        return mInstance->mImplementation->GetWidth();
    }

    int GameWindow::GetHeight(){
        return mInstance->mImplementation->GetHeight();
    }

    static void GameWindow::SwapBuffers(){
        mInstance->mImplementation->SwapBuffers();
    }

    static void GameWindow::PollEvents(){
        mInstance->mImplementation->PollEvents();
    }

    
    GameWindow::GameWindow(){
        #ifdef ARC_GlFW
            mImplementation = new GLFWimplementation;
        #else   
            #ERROR_only_GLFW_is_supported
         #endif
    }

    GameWindow::~GameWindow(){
        if(mImplementation != nullptr)
            delete mImplementation;
    }
};