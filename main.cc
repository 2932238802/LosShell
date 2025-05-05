
#include"include.hpp"

int main(){

    Prompt prompt;
    // 主循环 //
    while(1)
    {
        // 格式化打印 
        Prompt::Print();
        // 打印基础信息 //
        // 获取指令
        std::string str;
        getline(std::cin,str);

        // 处理命令
        prompt.DealCmd(str);
    }

    return 0;
}