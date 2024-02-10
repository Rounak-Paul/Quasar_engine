#pragma once

#include <common.h>
#include <Core/Core.h>

namespace Quasar {

    class QUASAR_API Window {
        public:
        Window(int w, int h, std::string name);
        ~Window();

        GLFWwindow* GetWindow() const {return window;}

        private:
        void Init();
        const int width;
        const int height;

        std::string windowName;
        GLFWwindow* window;
    };
}