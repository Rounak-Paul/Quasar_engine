add_executable(Editor src/Editor.cpp)

target_include_directories(Editor PRIVATE Core)

target_link_libraries(Editor PRIVATE Core)