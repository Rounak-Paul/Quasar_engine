file(GLOB SOURCES CONFIGURE_DEPENDS
    src/*.cpp
    src/*.h
)

add_executable(SandBox ${SOURCES})

