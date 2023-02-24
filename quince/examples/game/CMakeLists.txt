cmake_minimum_required(VERSION 3.20)
project(game CXX)


include(FetchContent)

set(PRODUCT_NAME game)
set(QUINCE_DIR "../..")
set(CMAKE_CONFIGURATION_TYPES Debug Release)

source_group(platform/win32 REGULAR_EXPRESSION "platform/win32/*")
add_executable(${PRODUCT_NAME})

target_sources(${PRODUCT_NAME} PRIVATE

    # On Windows
    $<$<PLATFORM_ID:Windows>:
        platform/win32/Main.cpp
    >
)

set_target_properties(${PRODUCT_NAME} PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

target_compile_definitions(${PRODUCT_NAME} PRIVATE
    $<$<CONFIG:Debug>:_DEBUG;QUINCE_DEBUG_BUILD=1>
    $<$<CONFIG:Release>:NDEBUG>

    # On Windows
    $<$<PLATFORM_ID:Windows>:
        WIN32_LEAN_AND_MEAN
        NOMINMAX
    >
)

set_target_properties(${PRODUCT_NAME} PROPERTIES
    # Change working directory in Visual Studio
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)

if(NOT QUINCE_BUILD_TARGET_ALL)
    add_subdirectory(${QUINCE_DIR}/cmake/quince ${CMAKE_CURRENT_BINARY_DIR}/quince_build)
endif()

FetchContent_MakeAvailable(
    SDL2 
    SDL2_IMAGE 
    glfw
)

set(SDL2main SDL2-static)
target_include_directories("${PROJECT_NAME}" PRIVATE include)

target_link_libraries("${PROJECT_NAME}" PRIVATE
    quince_static
    SDL2main 
    SDL2-static 
    SDL2_image 
    glfw
 )

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT game)
