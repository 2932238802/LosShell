

#include"CountCmdNumber.hpp"

/**
 * str_view : 用户输入的指令
 * 
 */
std::vector<std::string> CountCmdNumber::Count(std::string_view str_view)
{
    // 视图转换
    std::string input_string(str_view);
    
    // 输入流
    std::istringstream read_str(input_string);

    // 转换到向量
    std::vector<std::string> contain;

    // 填入
    std::string word;
    while(read_str >> word) {
        contain.push_back(word);
    }
    
    // 返回
    return contain;
}

