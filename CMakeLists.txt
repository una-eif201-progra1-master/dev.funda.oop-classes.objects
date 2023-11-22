cmake_minimum_required(VERSION 3.00) # Minimum version of CMake
project(main VERSION 1.0)        # Project name and version

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_EXPORT_COMPILE_COMMANDS 1)
SET(CMAKE_CXX_COMPILER "clang++")
SET(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES  ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

# Add include directory
include_directories(include)

# Add executable
add_executable(main src/main.cpp src/Car.h)