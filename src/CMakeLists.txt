include(FetchContent)
set(BUILD_SHARED_LIBS OFF)

FetchContent_Declare(
        glfw
        GIT_REPOSITORY https://github.com/glfw/glfw.git
        GIT_TAG 3.3.7
)
FetchContent_Declare(
        glad
        GIT_REPOSITORY https://github.com/Dav1dde/glad.git
)

FetchContent_MakeAvailable(glfw)
FetchContent_MakeAvailable(glad)
add_library(shiny-guacamole environment.cpp environment.hpp vectors.cpp vectors.hpp)
target_link_libraries(shiny-guacamole glad glfw)
