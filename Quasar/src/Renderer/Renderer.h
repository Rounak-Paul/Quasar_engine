#pragma once

#include <common.h>
#include <Core/Core.h>

namespace Quasar {
    class QUASAR_API Renderer {
        public:
        Renderer();
        ~Renderer();

        VkInstance GetInstance() const {return instance;}

        private:
        void Init();
        VkInstance instance;

        const std::vector<const char*> validationLayers = {
            "VK_LAYER_KHRONOS_validation"
        };

        #ifdef QS_DEBUG
            const bool enableValidationLayers = true;
        #else
            const bool enableValidationLayers = false;
        #endif

        bool CheckValidationLayerSupport();
    };
}