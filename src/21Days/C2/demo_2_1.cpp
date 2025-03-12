#include <iostream>
#include <string>

int main()
{
    int inputNember;

    std::cout << "Enter an integer: ";
    std::cin >> inputNember;

    std::cout << "Enter your name: ";
    std::string inputName;
    std::cin >> inputName;  // 要存储输入的整行内容需要使用函数 getline()

    std::cout << inputName << " entered " << inputNember << std::endl;

    return 0;
}
