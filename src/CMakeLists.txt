cmake_minimum_required(VERSION 3.28)
project(log)

set(CMAKE_CXX_STANDARD 17)

add_library(log mylogger.cpp
                mylogger.h
                myloggerconstants.h)
