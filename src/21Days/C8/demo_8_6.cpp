#include <iostream>

int main()
{
    std::cout << "sizeof fundamental types - " << std::endl;
    std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) = " << sizeof(double) << std::endl;

    std::cout << "sizeof pointers to fundamental types - " << std::endl;
    std::cout << "sizeof(char*) = " << sizeof(char*) << std::endl;
    std::cout << "sizeof(int*) = " << sizeof(int*) << std::endl;
    std::cout << "sizeof(double*) = " << sizeof(double*) << std::endl;

    return 0;
}