
#include"Mytime.hpp"
#include"CountCmdNumber.hpp"

#include"algorithm"
#include"unistd.h"
#include"CmdOne.hpp"

#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"


class Prompt
{
   /**
    * 打印基本格式
    */ 
public:
    static void Print()
    {
        // LosAngelous
        std::cout<<ANSI_COLOR_GREEN<<"LosShell@ " <<ANSI_COLOR_RESET;

        // 打印时间
        Mytime::GetTime();

        // 输出口
        std::cout << "#>>";
    }


    /**
     * 处理指令
     */
public:
    void DealCmd(std::string_view str_out)
    {
        // 转换视图
        std::string str(str_out);

        // 获取指令集
        std::vector<std::string> cmds(CountCmdNumber::Count(str_out));

        // 处理指令
        Deal(cmds,cmds.size());
    }


private:
    void Deal(const std::vector<std::string> contain , size_t size)
    {
        for(auto a: contain){
                std::transform(a.begin(),a.end(),a.begin(),::tolower);
        }

        if(size == 1)
        {
            CmdOne::DealCmd(contain.at(0),0);
        }
    }
};