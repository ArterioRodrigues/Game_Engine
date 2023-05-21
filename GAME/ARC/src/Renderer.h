#pragma once

#include "ArcUtil.h"
#include "Image.h"
#include "Shader.h"
#include "ImplRenderer.h"

namespace Arc {
    class ARC_API Renderer{
        public: 
            Renderer();

            struct TextureBox{
                int xTexCoord{ 0 };
                int yTexCoord{ 0 };

                int textureWidth{ 0 };
                int textureHeight{ 0 };                
            };

            struct ScreenCoord{
                int xCoord{ 0 };
                int yCoord{ 0 };

                ScreenCoor(int x,  int y) : xCoord{x}, yCoord{y};
            }

            void Draw(Image& image, Shader& shader, ScreenCoord coords); 
            void Draw(Image& image, ScreenCoord coords); 

            void Draw(Image& image, TextureBox texCoords, Shader& shader, ScreenCoord coords);        
            void Draw(Image& image, TextureBox texCoords, ScreenCoord coords);

        private:
            std::unique_ptr<ImplRenderer> mImplementation ( nullptr );
            Shader mDefaultShader;

    }
}