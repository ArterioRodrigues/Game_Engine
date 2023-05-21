#pragma once

#include "Renderer.h"

namespace Arc{

    class ImplRenderer{
        public: 
            virtual void Draw(Image& image, Renderer::TextureBox texCoords, Shader& shader, Renderer::ScreenCoord coords) = 0; 
    }
}