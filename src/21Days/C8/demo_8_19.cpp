#include <iostream>

void GetSquare(const int& number, int& result)
{
    result = number * number;
}

int main()
{
    std::cout << "Enter a number you wish to square: ";
    int number = 0;
    std::cin >> number;

    int square = 0;
    GetSquare(number, square);
    std::cout << number << "^2 = " << square << std::endl;

    return 0;
}