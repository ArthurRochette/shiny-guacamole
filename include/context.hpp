#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <GLFW/glfw3.h>



struct Context : public GLFWwindow
{
    
        Context();
        ~Context();
   

};

#endif //CONTEXT_HPP