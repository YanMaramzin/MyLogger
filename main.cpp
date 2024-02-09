#include <iostream>
#include "src/mylogger.h"

int main()
{
    std::cout << "\033[31m red text\033[0m\n";
    MyLogger::message("Привет");
    MyLogger::warning("Предупреждение");
    MyLogger::error("Ошибка");

    return 0;
}
