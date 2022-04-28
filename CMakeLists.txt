cmake_minimum_required(VERSION 3.16)
project(truc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})



add_subdirectory(src)
add_executable(Main main.cpp)

target_link_libraries(Main PUBLIC src)

target_include_directories(Main PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/src"
                          )
