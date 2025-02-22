#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    while (std::cin >> num1 >> num2) {
        if (num1 < num2) {
            std::cout << "The smaller value is :" << num1 << '\n';
            std::cout << "The larger value is :" << num2 << '\n';
        } else if (num1 > num2) {
            std::cout << "The smaller value is :" << num2 << '\n';
            std::cout << "The larger value is :" << num1 << '\n';
        } else 
            std::cout << "The numbers are equal." << '\n';

    }

    return 0;
}