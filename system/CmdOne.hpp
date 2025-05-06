#include "Exit.hpp"

#include <functional>
#include <unordered_map>
#include <string>

namespace
{
    std::function<void(int)> exit_cmd = [](int num)
    {
        if (num == 0)
        {
            Exit::GetCmd(ExitStata::ExitStata::SYSTEM_CODE_EXIT);
        }
    };


    std::unordered_map<std::string_view, std::function<void(int)>> func_map{
        {"exit", exit_cmd}};
}

class CmdOne
{
public:
    static void DealCmd(std::string_view str,int num)
    {
        if(func_map.find(str) != func_map.end())
        {   
            func_map[str](num);
        }
        else{
            // 错误打印
        }
    }
};