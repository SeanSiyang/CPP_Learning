#include <iostream>

int main()
{
    std::cout << "Computing the size of some C++ inbuilt variable types\n";
    
    std::cout << "Size of bool: " << sizeof(bool) << std::endl;
    std::cout << "Size of char: " << sizeof(char) << std::endl;
    std::cout << "Size of unsigned short int: " << sizeof(unsigned short) << std::endl;
    std::cout << "Size of short int: " << sizeof(short) << std::endl;
    std::cout << "Size of unsigned long int: " << sizeof(unsigned long) << std::endl;
    std::cout << "Size of long: " << sizeof(long) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of unsigned long long: " << sizeof(unsigned long long) << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << std::endl;
    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << std::endl;
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl;

    std::cout << "The output changes with compiler, hardware and OS" << std::endl;

    return 0;
}