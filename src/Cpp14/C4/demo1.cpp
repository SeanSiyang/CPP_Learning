#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    while (std::cin >> num1 >> num2) {
        std::cout << num1 << "\t" << num2 << '\n';
    }

    return 0;
}