#include <iostream>

int main()
{
    std::cout << "Enter two integers:" << std::endl;

    int num1 = 0, num2 = 0;
    std::cin >> num1;
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
    std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;

    return 0;
}