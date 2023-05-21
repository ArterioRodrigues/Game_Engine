#include "pch.h"
#include "ArcApp.h"

#include "../../glad/include/glad/glad.h"
#include "../../glfw/include/GLFW/glfw3.h"
#include "../../stbi/stb_image.h"


#include "Renderer.h"
#include "Image.h"
#include "Shader.h"
#include "GameWindow.h"

namespace Arc {
    ArcApp::ArcApp(){
        GameWindow::Init();
        GameWindow::CreateWindow(800,600, "Test Name");

        SetWindowCloseCallback([this]() {DefaultWindowCloseHandler();});
    }

    void ArcApp::Run() {
        mNextFrameTime = std::chrono::steady_clock::now();
        
        while (!mGameWindowShouldClose)
        {

            OnUpdate();
            
            std::this_thread::sleep_until(mNextFrameTime);

            Arc::GameWindow::SwapBuffers();
            Arc::GameWindow::PollEvents();

            mNextFrameTime = std::chrono::steady_clock::now() + mFrameDuration;
        }
    }

    void ArcApp::SetKeyPressedCallback(std::function<void(const KeyPressed&)> callbackFunc){
        GameWindow::GetWindow()->SetKeyPressedCallback(callbackFunc);
    }

    void ArcApp::SetKeyReleasedCallback(std::function<void(const KeyReleased&)> callbackFunc){
        GameWindow::GetWindow()->SetKeyReleasedCallback(callbackFunc);
    }

    void ArcApp::SetWindowCloseCallback(std::function<void()> callbackFunc){
        GameWindow::GetWindow()->SetWindowCloseCallback(callbackFunc);
    }

    void ArcApp::DefaultWindowCloseHandler(){
        mGameWindowShouldClose = true;
    }
}
