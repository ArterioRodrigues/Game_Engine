#include "pch.h"
#include "OpenGLShader.h"
#include "../../../glad/include/glad/glad.h"


namespace Arc{
    OpenGLShader::OpenGLShader(const std::string& vertexFile, const std::string& fragmentFile){
        std::string vShader;
        std::string line;
        std::ifstream file{ vertexFile };

        while(std::getline(file, line)){
            
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


        unsigned int sprogram;
        //Fragment Shader
		unsigned int fragmentShader;
		fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
		
		// file read //
		vShader.clear();
		std::ifstream fragmentInput{ fragmentFile };

		while (std::getline(fragmentInput, line))
		{
			
			line.append("\n");
			vShader += line;
		}

		fragmentInput.close();

		const char* fragSource = vShader.c_str();
		glShaderSource(fragmentShader, 1, &fragSource, NULL);
		glCompileShader(fragmentShader);

		glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
		if (!success)
		{
			glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
			std::cout << "ERROR SHADER FRAGMENT COMPILATION FAILED\n" << infoLog << std::endl;
		}
		//Link Shaders
		mProgram = glCreateProgram();
		glAttachShader(mProgram, vertex);
		glAttachShader(mProgram, fragmentShader);
		glLinkProgram(mProgram);
		//check for linking errors
		glGetProgramiv(mProgram, GL_LINK_STATUS, &success);
		if (!success)
		{
			glGetProgramInfoLog(mProgram, 512, NULL, infoLog);
			std::cout << "ERROR SHADER PROGRAM LINKING FAILED\n" << infoLog << std::endl;
		}
		glDeleteShader(vertex);
		glDeleteShader(fragmentShader);
    }   

    OpenGLShader::OpenGLShader( std::string&& vertexFile,  std::string&& fragmentFile){
         std::string vShader;
        std::string line;
        std::ifstream file{ vertexFile };

        while(std::getline(file, line)){
            
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


        unsigned int sprogram;
        //Fragment Shader
		unsigned int fragmentShader;
		fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
		
		// file read //
		vShader.clear();
		std::ifstream fragmentInput{ fragmentFile };

		while (std::getline(fragmentInput, line))
		{
			
			line.append("\n");
			vShader += line;
		}

		fragmentInput.close();

		const char* fragSource = vShader.c_str();
		glShaderSource(fragmentShader, 1, &fragSource, NULL);
		glCompileShader(fragmentShader);

		glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
		if (!success)
		{
			glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
			std::cout << "ERROR SHADER FRAGMENT COMPILATION FAILED\n" << infoLog << std::endl;
		}
		//Link Shaders
		mProgram = glCreateProgram();
		glAttachShader(mProgram, vertex);
		glAttachShader(mProgram, fragmentShader);
		glLinkProgram(mProgram);
		//check for linking errors
		glGetProgramiv(mProgram, GL_LINK_STATUS, &success);
		if (!success)
		{
			glGetProgramInfoLog(mProgram, 512, NULL, infoLog);
			std::cout << "ERROR SHADER PROGRAM LINKING FAILED\n" << infoLog << std::endl;
		}
		glDeleteShader(vertex);
		glDeleteShader(fragmentShader);
    }

    OpenGLShader::~OpenGLShader(){
        glDeleteProgram(mProgram);
    }

    void OpenGLShader::Pass2DFloatValues(const std::string& name, float val1, float val2){
        GLint location{glGetUniformLocation(mProgram, name.c_str())};
        glUniform2f(location, val1, val2);
    }   

    void OpenGLShader::Pass2DFloatValues(std::string&& name, float val1, float val2){
        GLint location{glGetUniformLocation(mProgram, name.c_str())};
        glUniform2f(location, val1, val2);
    }


    void OpenGLShader::Activate(){
        glUseProgram(mProgram);
    }

}



	