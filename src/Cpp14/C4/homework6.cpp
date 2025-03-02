/**
 * 
 * 定义一个能够存储10个字符串的 vector,分别是“zero”,“one”,…“nine”。
 * 编写一个能够实现数字与其对应拼写进行转换的程序。
 * 例如，当输入7的时候输出 seven。
 * 同时，该程序还能够实现拼写形式到数字形式的转换，
 * 例如，当输入 seven的时候输出7。
 */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "windows.h"

std::string toLower(std::string str)
{
    for (char &c : str) {
        c = tolower(c);
    }
    return str;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::map<std::string, int> m = {
        {"one", 1},
        {"two", 2},
        {"three", 3}
    };

    // 初始化数字到字符串的映射
    std::vector<std::string> numbers = {        // 建立英文拼写到数字的映射
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    
    // 初始化字符串到数字的映射
    std::map<std::string, int> numMap;
    for (int i = 0; i < 10; i++) {
        numMap[numbers[i]] = i;
    }

    // 把输入都处理成字符串
    std::string input;
    std::cout << "请输入数字（0-9）或英文单词（zero-nine）: ";
    std::cin >> input;

    // 检查是否为数字
    bool isNumber = true;
    for (char c : input) {
        if (!isdigit(c)) {
            isNumber = false;
            break;
        }
    }

    if (isNumber) {
        // 输入的是数字
        int num = stoi(input); // str to int
        if (num >= 0 && num <= 9) {
            std::cout << "英文拼写: " << numbers[num] << std::endl;
        } else {
            std::cout << "错误：请输入0-9之间的数字" << std::endl;
        }
    } else {
        // 输入的是字符串
        std::string lowerInput = toLower(input);
        auto it = numMap.find(lowerInput);  // 在Map里寻找匹配的对象   在map中查找对应数字
        if (it != numMap.end()) {
            std::cout << "对应数字: " << it->second << std::endl;
        } else {
            std::cout << "错误：无效的英文数字拼写" << std::endl;
        }
    }

    return 0;
}




// #include <iostream>
// #include <string>
// #include <vector>

// int main()
// {
//     std::vector<std::string> strs = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//     int num = -1;
//     std::string word = "";
//     while (std::cin >> num || std::cin >> word) {

//         std::cout << "num is " << num;
//         std::cout << "word is " << word;

//         if (num == 0) {
//             std::cout << "zero\n";
//         } else if (num == 1) {
//             std::cout << "one\n";
//         } else if (num == 2) {
//             std::cout << "two\n";
//         } else if (num == 3) {
//             std::cout << "three\n";
//         } else if (num == 4) {
//             std::cout << "four\n";
//         } else if (num == 5) {
//             std::cout << "five\n";
//         } else if (num == 6) {
//             std::cout << "six\n";
//         } else if (num == 7) {
//             std::cout << "seven\n";
//         } else if (num == 8) {
//             std::cout << "eight\n";
//         } else if (num == 9) {
//             std::cout << "nine\n";
//         }

//         if (word == "zero") {
//             std::cout << "0\n";
//         } else if (word == "one") {
//             std::cout << "1\n";
//         } else if (word == "two") {
//             std::cout << "2\n";
//         } else if (word == "three") {
//             std::cout << "3\n";
//         } else if (word == "four") {
//             std::cout << "4\n";
//         } else if (word == "five\n") {
//             std::cout << "5\n";
//         } else if (word == "six") {
//             std::cout << "6\n";
//         } else if (word == "seven") {
//             std::cout << "7\n";
//         } else if (word == "eight") {
//             std::cout << "8\n";
//         } else if (word == "nine") {
//             std::cout << "9\n";
//         }
//     }

//     // std::string word = "";
//     // while (std::cin >> word) {
//     //     if (word == "zero") {
//     //         std::cout << "0\n";
//     //     } else if (word == "one") {
//     //         std::cout << "1\n";
//     //     } else if (word == "two") {
//     //         std::cout << "2\n";
//     //     } else if (word == "three") {
//     //         std::cout << "3\n";
//     //     } else if (word == "four") {
//     //         std::cout << "4\n";
//     //     } else if (word == "five\n") {
//     //         std::cout << "5\n";
//     //     } else if (word == "six") {
//     //         std::cout << "6\n";
//     //     } else if (word == "seven") {
//     //         std::cout << "7\n";
//     //     } else if (word == "eight") {
//     //         std::cout << "8\n";
//     //     } else if (word == "nine") {
//     //         std::cout << "9\n";
//     //     }
//     // }

//     return 0;
// }