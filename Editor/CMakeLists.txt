file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS
    src/**/*.cpp
    src/**/*.h
)

add_executable(Editor src/EditorApp.cpp ${APP_SOURCES})



