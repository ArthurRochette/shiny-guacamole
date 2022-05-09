cmake_minimum_required(VERSION 3.0.0)
project(test VERSION 0.1.0)

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


include_directories(src)
add_executable(test main.cpp src/vectors.hpp src/environment.hpp src/environment.cpp  src/window.hpp src/window.cpp)
target_link_libraries(test glad glfw )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
