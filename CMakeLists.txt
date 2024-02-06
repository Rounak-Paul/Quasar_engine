cmake_minimum_required(VERSION 3.20)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
	set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDebug")
else()
	set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded")
endif()

project(QuasarEngine)

add_subdirectory(QuasaeEngine)
add_subdirectory(SandBox)

target_link_directories(QuasaeEngine PRIVATE SandBox)
target_include_directories(QuasaeEngine PRIVATE SandBox)




