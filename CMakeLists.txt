cmake_minimum_required(VERSION 3.0.0)
project(test VERSION 0.1.0)

include_directories(./shiny-guacamole/includes)
add_subdirectory(shiny-guacamole)


add_executable(test test.cpp)
target_link_libraries(test shiny_guacamole)