cmake_minimum_required(VERSION 3.20)
project(quince CXX)

set(QUINCE_DIR "../..")
set(QUINCE_SRC_DIR "${QUINCE_DIR}/quince")
set(CMAKE_CONFIGURATION_TYPES Debug Release)

set(QUINCE_USE_EXPERIMENTAL true CACHE BOOL "Use Experimental")

# NOTE: static library
add_library(quince_static STATIC)
include(application.cmake)
include(platform.cmake)

set_target_properties(quince_static PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

target_include_directories(quince_static PRIVATE
    ${QUINCE_DIR}
    ${QUINCE_DIR}/dependencies
)

