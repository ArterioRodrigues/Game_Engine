#pragma once

namespace Arc {

struct TextureBox{
    int xTexCoord{ 0 };
    int yTexCoord{ 0 };

    int textureWidth{ 0 };
    int textureHeight{ 0 };  

    TextureBox(int xOnPicture, int yOnPicture, int boxWidth, int boxHeight){
        xTexCoord = xOnPicture;
        yTexCoord = yOnPicture;
        textureWidth = boxWidth;
        textureHeight = boxHeight;
    }       
};

struct ScreenCoord{
    int xCoord{ 0 };
    int yCoord{ 0 };

    ScreenCoord(int x,  int y){
        xCoord = x; 
        yCoord = y;
    }
};
}