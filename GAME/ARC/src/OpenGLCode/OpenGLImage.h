#pragma once 
#include "../ImplImage.h"

namespace Arc {
    class OpenGLImage : public ImplImage {
        public:
            OpenGLImage(const std::string& file);                    
            OpenGLImage(std::string&& file);
            ~OpenGLImage();

            virtual void Activate() override;
            virtual int GetWidth() const override;
            virtual int GetHeight() const override;
        private:
            unsigned int mVAO;
            unsigned int mVBO;
            unsigned int mEBO;
            unsigned int mTex;
            int mWidth{ 0 };
            int mHeight{ 0 };
    };
}