file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    src/**/*.cpp
    src/**/*.h
)

message (STATUS "Files in Quasar: ${SOURCES}")

add_library(Quasar SHARED src/common.h src/Quasar.h ${SOURCES})
set_target_properties(Quasar PROPERTIES LINKER_LANGUAGE CXX)

target_precompile_headers(Quasar PRIVATE src/common.h)
target_include_directories(Quasar PRIVATE ${PROJECT_SOURCE_DIR}/Quasar/src)
target_include_directories(Quasar PUBLIC ${PROJECT_SOURCE_DIR}/Vendor/glm)
target_include_directories(Quasar PUBLIC ${PROJECT_SOURCE_DIR}/Vendor/imgui)