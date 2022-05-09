#ifndef ENV_HPP
#define ENV_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>
#include <vector>

#include "window.hpp"


namespace SG
{
    class Environment
    {
    private:
        std::vector<Window *> windows; // creer une classe window pour pouvoir y stocker une fonction de render

    public:
        Environment();
        void start();
        void addWindow(int sizex, int sizey, char const *name);
    };

}

#endif // CONTEXT_HPP