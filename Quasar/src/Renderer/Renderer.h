#pragma once

#include <common.h>
#include <Core/Core.h>
#include "Validation.h"

namespace Quasar {
    class QUASAR_API Renderer {
        public:
        Renderer();
        ~Renderer();

        VkInstance GetInstance() const {return instance;}

        private:
        void Init();
        VkInstance instance;
        Validation* validation;

        void CreateInstance();
    };
}