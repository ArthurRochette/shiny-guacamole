cmake_minimum_required(VERSION 3.16)

project(AppTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)
set(CMAKE_BUILD_TYPE Debug)


add_subdirectory(src)
add_subdirectory(test)

