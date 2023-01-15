cmake_minimum_required(VERSION 3.25)

project(ripe VERSION 0.1.0 DESCRIPTION "C++ game engine.")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add library first
add_subdirectory(src)

add_subdirectory(sandbox)
