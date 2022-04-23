include(FetchContent)
cmake_minimum_required(VERSION 3.16)

project(SeeU)

set(CMAKE_CXX_STANDARD 17)

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


add_executable(main main.cpp)
link_directories(${CMAKE_SOURCE_DIR}/include)
target_link_libraries(main glad )
target_link_libraries(main glfw )

