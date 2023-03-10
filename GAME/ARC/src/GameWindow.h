#pragma once

#include "pch.h"
#include "ArcUtil.h"
#include "WindowImplementation.h"


namespace Arc {
    class ARC_API GameWindow {
        public:
            static void Init();
            static std::unique_ptr<GameWindow>& GetWindow();

            static void CreateWindow(int width, int height, const std::string& windowName);
            static void CreateWindow(int width, int height, std::string&& windowName);

            static int GetWidth();
            static int GetHeight();

            static void SwapBuffers();
            static void PollEvents();

            ~GameWindow();
            
        private:
            GameWindow();
            inline static std::unique_ptr<GameWindow> mInstance{ nullptr };
            WindowImplementation* mImplementation{ nullptr };
    };
};