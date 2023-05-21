#pragma once 

#include "pch.h"
#include "ArcUtil.h"
#include "ImplImage.h"

namespace Arc {
    class ARC_API Image {
        public:
            Image(const std::string& imageFile);
            Image(std::string&& imageFile);

            void Activate();

            int GetWidth() const;
            int GetHeight() const;

        private:
            ImplImage* mImplementation{ nullptr };

    };
}