cmake_minimum_required(VERSION 3.21)
project(gbclassTwo)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_GLIBCXX_DEBUG")

add_executable(gbclassTwo src/main.cpp src/FirstTask.cpp src/FirstTask.hpp src/SecondTask.cpp src/SecondTask.hpp src/FileTask.cpp src/FileTask.hpp src/Task.cpp src/Task.hpp)
target_compile_features(gbclassTwo PUBLIC cxx_std_20)
