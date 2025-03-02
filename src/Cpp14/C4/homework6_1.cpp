#include <iostream>
#include <vector>
#include <map>
#include <string>

std::string toLower(std::string str) 
{
    for (char &c : str) {
        c = tolower(c);
    }

    return str;
}

int main()
{
    std::vector<std::string> numbers = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    std::map<std::string, int> num_map;
    for (int i = 0; i < numbers.size(); i++) {
        num_map[numbers[i]] = i;
    }

    while (true) {
        std::string input;  // 将输入都处理成字符串，判断是否为数字即可
        std::cout << "\n请输入数字（0-9）或英文单词（输入 exit 退出）: ";
        std::cin >> input;

        // 退出条件
        if (toLower(input) == "exit") {
            std::cout << "程序已退出\n";
            break;
        }

        // 处理数字输入，默认处理的是数字
        bool is_number = true;
        for (char c : input) {
            if (!isdigit(c)) {
                is_number = false;
                break;
            }
        }

        if (is_number) {
            // 将字符串转为数字
            int num = stoi(input);
            if (num >= 0 && num <= 9) {
                std::cout << "→ 英文拼写: " << numbers[num] << std::endl;;\
            } else {
                std::cout << "错误：请输入0-9之间的数字" << std::endl;
            }
        } else {
            // 不是数字
            std::string lower_input = toLower(input);

            auto it = num_map.find(lower_input);
            if (it != num_map.end())
                std::cout << "→ 对应数字: " << it->second << std::endl;
            else
                std::cout << "错误：无效的英文数字拼写" << std::endl;
        }
    }
}


