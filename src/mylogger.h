//
// Created by mist on 06.02.24.
//
#pragma once
#include <string>

class MyLogger
{
public:
    static void message(const std::string &str);
    static void warning(const std::string &warn);
    static void error(const std::string &err);

    enum class ColorMessage
    {
        RED = 31,
        GREEN,
        YELLOW,
        BLUE
    };
};
