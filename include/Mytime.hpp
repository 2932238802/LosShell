#pragma once
#include <chrono>
#include <ctime>
#include <iomanip>

#include <iostream>
#include <string>

namespace
{
#define ANSI_COLOR_BLUE "\x1b[35m"
#define ANSI_COLOR_RESET "\x1b[0m"
}

class Mytime
{
public:
    static void GetTime();
};