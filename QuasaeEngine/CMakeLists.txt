file(GLOB SOURCES CONFIGURE_DEPENDS
    src/*.cpp
    src/*.h
)

add_library(QuasaeEngine SHARED ${SOURCES})

add_definitions(QS_BUILD_DLL)

target_include_directories(QuasaeEngine PRIVATE src/)


