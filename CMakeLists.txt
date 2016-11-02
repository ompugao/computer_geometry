project(computer_geometry)
cmake_minimum_required(VERSION 2.8)
include_directories(include)
add_executable(main src/main.cpp)

enable_testing()
add_subdirectory(test)

