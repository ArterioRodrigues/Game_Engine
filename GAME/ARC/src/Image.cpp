#include "pch.h"
#include "Image.h"
#include "OpenGLCode/OpenGLImage.h"

namespace Arc {
    Image::Image(const std::string& imageFile){
        #ifdef ARC_OPENGL
            mImplementation = new OpenGLImage{ imageFile };
        #else
            #Only_OpenGL_is_supported_for_now
        #endif
    }

    Image::Image(std::string&& imageFile){
        #ifdef ARC_OPENGL
            mImplementation = new OpenGLImage{ std::move(imageFile) };
        #else
            #Only_OpenGL_is_supported_for_now
        #endif
    }

    void Image::Activate(){
        return mImplementation->Activate();
    }


    int Image::GetWidth() const{
        return mImplementation->GetWidth();
    }

    int Image::GetHeight() const{
        return mImplementation->GetHeight();
    }

}