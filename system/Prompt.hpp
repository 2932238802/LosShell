
#include "Mytime.hpp"
#include"CountCmdNumber.hpp"

class Prompt
{
public:
    static void Print()
    {
        // LosAngelous
        printf("%s", "LosShell@");

        // 打印时间
        Mytime::GetTime();

        // 这里加上路径

        // 输出口
        std::cout << "#>>";
    }

public:
    void DealCmd(std::string_view str_out)
    {
        std::string str(str_out);

        int num = 0 ;
        char * cmd;
        CountCmdNumber::Count(str_out,num,cmd);

        std::cout << "echo >> " << str_out << "user input number is : " <<num<<std::endl;
    }


private:
    void Deal()
    {
        

    }
};