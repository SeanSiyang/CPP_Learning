#include <iostream>
#include <string>
#include <vector>
#include "windows.h"


// 处理输入的字符，排除大小写的影响
std::string toLower(std::string input)
{
    for (char &c : input) {
        c = tolower(c);
    }
    
    return input;
}

bool isDouble(const std::string& s) {
    char* end = nullptr;
    double val = strtod(s.c_str(), &end);

    // 检查：
    // 1. 转换后的指针是否到字符串末尾
    // 2. 字符串不能全为空（例如空字符串或纯空格）
    return end != s.c_str() && *end == '\0';
}

int main()
{
    // 处理的输入都是字符串，判断是否为数字即可
    // isdigit 判断是否为数字
    // stoi 从字符串转数字
    // 利用vector可以根据数字立马定位字符串
    SetConsoleOutputCP(CP_UTF8);

    std::string num1 = "", num2 = "";
    char oper = 'a';

    std::vector<std::string> numbers = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    
    while (std::cin >> num1 >> num2 >> oper) {
        
        // 判断是否为字符串，若是字符串，要转为数字
        bool is_number_1 = true;
        bool is_number_2 = true;

        
        // 输入是double值的字符串
        for (char c : num1) {
            if (!isdigit(c)) {
                is_number_1 = false;
                break;
            }
        }

        for (char c : num2) {
            if (!isdigit(c)) {
                is_number_2 = false;
                break;
            }
        }

        if (is_number_1) {
            // 数字，则需要把数字转为实际上的数字用来计算
            
            
        } else {

        }

        if (is_number_2) {

        }
    }

}