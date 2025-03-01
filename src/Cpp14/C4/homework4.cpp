#include <iostream>
#include <vector>
#include "windows.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int low = 1, high = 100;
    char response;

    std::cout << "请想一个1到100之间的整数，我将通过最多7个问题猜出它！\n";

    while (low < high) {
        int mid = (low + high) / 2;
        std::cout << "mid == " << mid << "\n"; 
        std::cout << "low == " << low << "\n";
        std::cout << "high == " << high << "\n";
        std::cout << "你的数小于等于" << mid << "吗？(y/n) ";
        std::cin >> response;

        if (response == 'y' || response == 'Y') {
            high = mid;     // 用户确认数 <= mid，缩小上限至mid
        } else {
            low = mid + 1;  // 用户确认数 > mid，提高下限至mid+1
        }
    }

    std::cout << "你想象的数是：" << low << "!\n";
}

// int val = 0.0;
    // std::cout << "Please enter a number:\n";
    // std::cin >> val;

    // if (val < 50) {
    //     std::cout << "Is your number is smaller than 50?\n";
    //     if (val < 25) {
    //         // 
    //     } else {

    //     }
    // } else {
    //     // val > 50
    //     std::cout << "Is your number is smaller than 75?\n";
    //     if (val < 75) {
    //         // val < 75
            
    //     } else {
    //         // val > 75

    //     }

    // }
    
    // while (true) {
    //     std::cout << "Please enter a number:\n";
    //     if (!std::cin >> val) {
    //         // 处理错误的输入
    //         if (std::cin.eof()) break;  // 检查是否是文件结束符
    //         std::cerr << "Error: Invalid input. Please enter a number.\n";
    //         std::cin.clear();   // 清除错误状态标志
    //         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清空输入缓冲区, 忽略输入缓冲区中的无效字符
    //         continue;
    //     }
    // }
