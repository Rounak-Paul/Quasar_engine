/*
-------------------------------------------------------------------------------
Application	:		Quasar Engine

Author		:		Rounak Paul
Email		:		paulrounak1999@gmail.com
Date		:		7th Feb 2024

Description	:		Pre compiled header, include in all Quasar core scripts.
-------------------------------------------------------------------------------
*/

#pragma once

// STD
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>

// Vendors
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_vulkan.h>
#include <vulkan/vulkan.h>