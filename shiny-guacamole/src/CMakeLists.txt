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
FetchContent_Declare(
        glm
        GIT_REPOSITORY https://github.com/g-truc/glm.git
)

FetchContent_MakeAvailable(glfw)
FetchContent_MakeAvailable(glad)
FetchContent_MakeAvailable(glm)

file(GLOB_RECURSE INCLUDES_FILES ../includes/*.hpp)
file(GLOB_RECURSE SRC_FILES  ./*.cpp)
set(SRC_FILES ${SRC_FILES} ${INCLUDES_FILES})

add_library(shiny_guacamole ${SRC_FILES} )
target_link_libraries(shiny_guacamole glad glfw glm)

