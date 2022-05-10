#ifndef ENV_HPP
#define ENV_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>
#include <vector>
#include <iostream>

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
        void addWindow(int sizex, int sizey, int posx, int posy, char const *name);
        void addWindow(Window *window);
        Window *getWindow(int index);
        friend std::ostream &operator<<(std::ostream &os, const Environment &env)
        {
            for (auto it = env.windows.begin(); it < env.windows.end(); it++)
            {
                os << **it << std::endl;
            }
            return os;
        }
    };

}

#endif // CONTEXT_HPP