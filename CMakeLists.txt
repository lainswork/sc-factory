# cmake 的最低标准 我的 cmake 3.22.2
cmake_minimum_required(VERSION 3.22)
project(sc-factory)
# 设置cmake语言标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(payload)
add_subdirectory(generator)
add_subdirectory(actuator)
