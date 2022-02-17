cmake_minimum_required(VERSION 3.21)
project(gbclassTwo)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_GLIBCXX_DEBUG")

add_executable(gbclassTwo main.cpp src/fTask.cpp src/fTask.hpp src/includes.hpp src/sTask.cpp src/sTask.hpp src/fileTask.cpp src/fileTask.hpp)
