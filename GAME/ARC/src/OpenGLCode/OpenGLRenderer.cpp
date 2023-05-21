#include "../pch.h"
#include "OpenGLRenderer.h"
#include "../../../glad/include/glad/glad.h"
#include "../../../glfw/include/GLFW/glfw3.h"

namespace Arc{
    OpenGLRenderer::OpenGLRenderer(){
          if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
            std::cout << "Failed to initialize GLAD" << std::endl;
            return;
        }

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

        int edata[] = {
            0, 1, 3,
            1, 2, 3
        };

       
        glGenVertexArrays(1, &mVAO);
        glGenBuffers(1, &mVBO);
        glGenBuffers(1, &mEBO);

        glBindVertexArray(mVAO);
        
        glBindBuffer(GL_ARRAY_BUFFER, mVBO);
       

        glBindBuffer(GL_ARRAY_BUFFER, mEBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(edata), edata, GL_STATIC_DRAW);

        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE,7 * sizeof(float), (void*)(0));
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,7 * sizeof(float), (void*)(2*sizeof(float)));
        glEnableVertexAttribArray(1);

         glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE,7 * sizeof(float), (void*)(5*sizeof(float)));
        glEnableVertexAttribArray(1);
    }

    void OpenGLRenderer::Draw(Image& image, TextureBox texCoords, Shader& shader, ScreenCoord coords){
        
        float xGL_BL = float(texCoords.xTexCoord)/float(image.GetWidth());
        float yGL_BL = float(texCoords.yTexCoord)/float(image.GetHeight());

        float xGL_TL = float(texCoords.xTexCoord)/float(image.GetWidth());
        float yGL_TL = float(texCoords.yTexCoord + texCoords.textureHeight)/float(image.GetHeight());

        float xGL_TR = float(texCoords.xTexCoord + texCoords.textureWidth)/float(image.GetWidth());
        float yGL_TR = float(texCoords.yTexCoord + texCoords.textureHeight)/float(image.GetHeight());

        float xGL_BR = float(texCoords.xTexCoord + texCoords.textureWidth)/float(image.GetWidth());
        float yGL_BR = float(texCoords.yTexCoord)/float(image.GetHeight());


        float vdata[] = {
            coords.xCoord, coords.yCoord, xGL_BL, yGL_BL,
            coords.xCoord, coords.yCoord + image.GetHeight(), xGL_TL, yGL_TL,
            coords.xCoord + image.GetWidth(), coords.yCoord + image.GetHeight(), xGL_TR, yGL_TR,
            coords.xCoord + image.GetWidth(), coords.yCoord + image.GetHeight(), xGL_BR, yGL_BR,
        };  

        glBindBuffer(GL_ARRAY_BUFFER, mVBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(vdata), vdata, GL_STATIC_DRAW);

        shader.Activate();
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    }  

    void OpenGLRenderer::Clear(){
        glClearColor(0.3f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
}