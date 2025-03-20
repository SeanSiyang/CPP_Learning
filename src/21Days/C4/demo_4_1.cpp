#include <iostream>

int main()
{
    const int ARRAY_LENGTH = 5;
    int myNumbers[5] = { 34, 56, -21, 5002, 365 };

    std::cout << "First element at index 0: " << myNumbers[0] << std::endl;
    std::cout << "Second element at index 0: " << myNumbers[1] << std::endl;
    std::cout << "Third element at index 0: " << myNumbers[2] << std::endl;
    std::cout << "Fourth element at index 0: " << myNumbers[3] << std::endl;
    std::cout << "Fifth element at index 0: " << myNumbers[4] << std::endl;

    return 0;
}