#include <iostream>

void GetSquare(int& number)
{
    number *= number;
}

int main()
{
    std::cout << "Enter a number you wish to square: ";
    int number = 0;
    std::cin >> number;

    GetSquare(number);
    std::cout << "Square is: " << number << "\n";

    return 0;
}