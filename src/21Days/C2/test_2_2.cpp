#include <iostream>

int DemoConsoleOutput();

int main()
{
    return DemoConsoleOutput();
}

int DemoConsoleOutput()
{
    int num1 = 3.0;
    int num2 = 2.0;

    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';

    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';

    return 0;
}