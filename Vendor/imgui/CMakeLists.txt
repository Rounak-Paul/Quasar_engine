file(GLOB_RECURSE IMGUI_SOURCES CONFIGURE_DEPENDS
    *.cpp
    *.h

)

add_library(imgui 
    backends/imgui_impl_glfw.h 
    backends/imgui_impl_glfw.cpp 
    backends/imgui_impl_vulkan.h
    backends/imgui_impl_vulkan.cpp
    ${SOURCES}
)

set_target_properties(imgui PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(imgui PRIVATE ${PROJECT_SOURCE_DIR}/Vendor/imgui)

target_link_directories(imgui PUBLIC ${VULKAN_PATH}/Lib)
target_link_libraries(imgui PUBLIC ${VULKAN_PATH}/Lib/vulkan-1.lib)
target_include_directories(imgui PUBLIC 
	${VULKAN_PATH}/Include
)

target_link_libraries(imgui PUBLIC glfw)
