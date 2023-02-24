cmake_minimum_required(VERSION 3.20)

include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)

set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_DOCS OFF)

# sdl2
FetchContent_Declare(
    SDL2
    GIT_REPOSITORY  https://github.com/libsdl-org/SDL
    GIT_TAG         release-2.0.20
    GIT_PROGRESS    TRUE
)

# sdl2_image
FetchContent_Declare(
    SDL2_IMAGE
    GIT_REPOSITORY  https://github.com/libsdl-org/SDL_image
    GIT_TAG         97405e74e952f51b16c315ed5715b6b9de5a8a50
    GIT_PROGRESS    TRUE
)

# glfw
FetchContent_Declare(
  glfw
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG 3.3.8
)

#FetchContent_MakeAvailable(SDL2)
FetchContent_MakeAvailable(
    SDL2 
    SDL2_IMAGE 
    glfw
)

