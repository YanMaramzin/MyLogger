//
// Created by mist on 06.02.24.
//

#include <iostream>
#include  "myloggerconstants.h"
#include "mylogger.h"

void MyLogger::message(const std::string& str)
{
    std::cout << START << static_cast<int>(ColorMessage::BLUE) << "m" << "Message: " << str << STOP << std::endl;
}

void MyLogger::warning(const std::string& warn)
{
    std::cout << START << static_cast<int>(ColorMessage::YELLOW) << "m" << "Warning: " << warn << STOP << std::endl;
}

void MyLogger::error(const std::string& err)
{
    std::cout << START << static_cast<int>(ColorMessage::RED) << "m" << "ERROR: " << err << STOP << std::endl;
}
