cmake_minimum_required(VERSION 3.26) # Minimum version of CMake
project(Example VERSION 1.0)        # Project name and version

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
include_directories(include)

# Add executable
add_executable(Example src/main.cpp src/Car.h)