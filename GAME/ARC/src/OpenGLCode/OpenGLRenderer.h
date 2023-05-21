#pragma once 

#include "../ImplRenderer.h"

namespace Arc{
    class OpenGLRenderer: public ImplRenderer{
        public:

            OpenGLRenderer();

            virtual void Draw(Image& image, TextureBox texCoords, Shader& shader, ScreenCoord coords); 

            virtual void Clear() override;
        private:
            unsigned int mVBO, mVAO, mEBO;
    };
}