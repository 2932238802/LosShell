
#include "Mytime.hpp"

void Mytime::GetTime()
{
    // 获取 time_point
    auto time_point = std::chrono::system_clock::now();

    // to_time_t
    std::time_t time_t = std::chrono::system_clock::to_time_t(time_point);

    // 转成 tm
    std::tm *local_time = std::localtime(&time_t);

    // 格式化打印
    auto str = std::put_time(local_time, "%Y-%m-%d %H:%M:%S");

    // 打印
    std::cout << str;
}