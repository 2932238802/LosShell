

#include"CountCmdNumber.hpp"

int CountCmdNumber::Count(std::string_view str_view,int num ,char * cmd)
{
    std::string input_string(str_view);
    std::istringstream read_str(input_string);
    std::istringstream dis_str(input_string);

    std::string word; 
    int number = 0;
    while(read_str >> word) {number++;}

    cmd = new char[number];

    while(dis_str >> cmd);

    num = number;
}



// #include <sstream>
// #include <string>
// #include <string_view>
// #include <vector> // 需要包含 vector

// class CountCmdNumber
// {
// public:
//     // 函数直接返回包含所有单词的 vector
//     std::vector<std::string> Decompose(std::string_view str_view)
//     {
//         std::vector<std::string> words; // 创建一个 vector 来存储单词
//         std::string temp_word;

//         // 如果使用 C++17 或更早，需要转换
//         std::string input_string(str_view);
//         std::istringstream read_str(input_string);
//         // 如果使用 C++20，可以直接用 string_view:
//         // std::istringstream read_str(str_view);

//         // 读取单词并添加到 vector 中
//         while (read_str >> temp_word) {
//             words.push_back(temp_word); // 将读取到的单词加入 vector
//         }

//         return words; // 返回包含所有单词的 vector
//     }
// };

// // --- 调用示例 ---
// #include <iostream>
// int main() {
//     CountCmdNumber counter;
//     std::string_view command_line = " git commit -m \"Initial commit\" ";
//     std::vector<std::string> args = counter.Decompose(command_line);

//     std::cout << "单词数量: " << args.size() << std::endl; // 获取数量

//     std::cout << "分解后的单词:" << std::endl;
//     for (const std::string& arg : args) { // 遍历并打印每个单词
//         std::cout << "- " << arg << std::endl;
//     }
//     // vector 会自动管理内存，无需手动 delete

//     return 0;
// }
