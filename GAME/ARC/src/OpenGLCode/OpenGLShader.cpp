#include "pch.h"
#include "OpenGLShader.h"
#include "glad/glad.h"


namespace Arc{
    OpenGLShader::OpenGLShader(const std::string&& vertexFile, const std::string&& fragmentFile){
        std::string vShader;
        std::string line;
        std::ifstream file{ vertexFile };

        while(file){
            std::getline(file, line);
            vShader += line;
            vShader += "\n";
        }

        file.close();

        const char* cVShader = vShader.c_str();

        unsigned int vertex;
        vertex = glCreateShader(GL_VERTEX_SHADER);
        glShaderSource(vertex, 1, &cVShader, NULL);
        glCompileShader(vertex);

        int success;
        char infoLog[1024];
        
        glGetShaderiv(vertex, GL_COMPILE_STATUS, &success);
        if(!success){
            glGetShaderInfoLog(vertex, 1024, NULL, infoLog);
            std::cout << "" << infoLog << "\n ---------------";
        }


        unsigned int sprogram 
    }   

    OpenGLShader::OpenGLShader( std::string&& vertexFile,  std::string&& fragmentFile){

    }

    void OpenGLShader::Activate(){
        glUseProgram(mProgram);
    }

}
