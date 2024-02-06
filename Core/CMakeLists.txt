file(GLOB SOURCES CONFIGURE_DEPENDS
    src/*.cpp
    src/*.h
)

add_library(Core SHARED Quasar.h ${SOURCES})
