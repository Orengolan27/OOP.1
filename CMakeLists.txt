cmake_minimum_required(VERSION 3.21)
project(HOMEWORK)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(HOMEWORK src/main.cpp
        src/Cpu.cpp
        src/Computer.cpp
        src/Store.cpp)