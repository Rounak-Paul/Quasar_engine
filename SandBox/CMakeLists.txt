file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS
    src/**/*.cpp
    src/**/*.h
)

add_executable(SandBox src/SandBoxApp.cpp ${APP_SOURCES})



