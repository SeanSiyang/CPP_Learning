#include <iostream>
#include <string>
#include "windows.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double num1 = 0.0, num2 = 0.0;
    char oper = 'a';

    while (std::cin >> num1 >> num2 >> oper) {
        if (oper == '+') {
            std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << '\n';
        } else if (oper == '-') {
            std::cout << "The diff of " << num1 << " and " << num2 << " is " << num1 - num2 << '\n';
        } else if (oper == '/') {
            std::cout << "The divid of " << num1 << " and " << num2 << " is " << num1 / num2 << '\n';
        } else if (oper == 'x') {
            std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << '\n';
        } else if (oper == '\%') {
            std::cout << "The remainder of " << num1 << " and " << num2 << " is " << (int)num1 % (int)num2 << '\n';
        } else {
            std::cout << "[ERROR] - You might input an error char.\n";
        }

    }

    return 0;
}
