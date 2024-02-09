cmake_minimum_required(VERSION 3.28)
project(MyLogger)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyLogger main.cpp)
add_subdirectory(src)
target_link_libraries(MyLogger PUBLIC log)

