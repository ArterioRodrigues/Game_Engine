#pragma once 

#include "../ImplRenderer.h"

namespace Arc{
    class OpenGLRenderer: public ImplRenderer{
        public:

            OpenGLRenderer();

            virtual void Draw(Image& image, Renderer::TextureBox texCoords, Shader& shader, Renderer::ScreenCoord coords); 

        private:
            unsigned int mVBO, mVAO, mEBO;
    }
}