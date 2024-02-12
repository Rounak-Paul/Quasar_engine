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
        VkDebugUtilsMessengerEXT debugMessenger;

        const std::vector<const char*> validationLayers = {
            "VK_LAYER_KHRONOS_validation"
        };

        #ifdef QS_DEBUG
            const bool enableValidationLayers = true;
        #else
            const bool enableValidationLayers = false;
        #endif

        void CreateInstance();
        bool CheckValidationLayerSupport();
        std::vector<const char*> GetRequiredExtensions();
        void SetupDebugMessenger();
        void PopulateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
        static VKAPI_ATTR VkBool32 VKAPI_CALL DebugCallback(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageType, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, void* pUserData) {
            std::cerr << "validation layer: " << pCallbackData->pMessage << std::endl;

            return VK_FALSE;
        }
        VkResult CreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pDebugMessenger);
        void DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT debugMessenger, const VkAllocationCallbacks* pAllocator);
    };
}