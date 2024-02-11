cmake_minimum_required(VERSION 3.20)
set (CMAKE_CXX_STANDARD 17)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
	set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDebug")
else()
	set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded")
endif()

set (VULKAN_PATH "C:/VulkanSDK/1.3.275.0")

project(QuasarEngine)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DQS_DEBUG")

add_subdirectory(Vendor/glfw)
add_subdirectory(Vendor/glm/glm) 
add_subdirectory(Vendor/imgui)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Quasar
add_subdirectory(Quasar)
target_compile_definitions(Quasar PRIVATE QS_BUILD_DLL)

# SandBox
add_subdirectory(Editor)
target_link_libraries(Editor PRIVATE Quasar)
target_include_directories(Editor PRIVATE Quasar/src)

target_link_libraries(Quasar PUBLIC glfw)
target_include_directories(Quasar PRIVATE 
	${CMAKE_SOURCE_DIR}/Vendor/glfw/include
)

target_link_libraries(Quasar PUBLIC glfw)
target_include_directories(Quasar PRIVATE 
	${CMAKE_SOURCE_DIR}/Vendor/glfw/include
)

target_link_directories(Quasar PUBLIC ${VULKAN_PATH}/Lib)
target_link_libraries(Quasar PUBLIC ${VULKAN_PATH}/Lib/vulkan-1.lib)
target_include_directories(Quasar PUBLIC 
	${VULKAN_PATH}/Include
)

target_link_libraries(Quasar PUBLIC imgui)
target_include_directories(Quasar PRIVATE 
	${CMAKE_SOURCE_DIR}/Vendor/imgui
)


