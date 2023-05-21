#include "pch.h"
#include "ArcApp.h"

#include "../../glad/include/glad/glad.h"
#include "../../glfw/include/GLFW/glfw3.h"
#include "../../stbi/stb_image.h"

#include "Renderer.h"
#include "Image.h"
#include "Shader.h"

namespace Arc {
    void ArcApp::Run() {
        Renderer renderer;

        Image pic{"../Assets/Images/test.png"};
        pic.Activate();

        Shader sProgram{};

        while (true)
        {
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glBindVertexArray(VAO);
            glUseProgram(sprogram);
            glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
            OnUpdate();
        }
    }
}
