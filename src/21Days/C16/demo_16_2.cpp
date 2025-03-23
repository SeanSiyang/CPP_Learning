#include <iostream>
#include <string>

int main() 
{
    std::string stlString("Hello String");

    // 运算符[]
    std::cout << "Display elements in string using array-syntax: " << std::endl;
    for (size_t charCounter = 0; charCounter < stlString.length(); ++charCounter) {
        std::cout << "Character [" << charCounter << "] is :";
        std::cout << stlString[charCounter] << std::endl;
    }

    std::cout << std::endl;

    // 迭代器
    std::cout << "Display elements in string using iterators: " << std::endl;
    int charOffset = 0;
    std::string::const_iterator charLocator;
    for (auto charLocator = stlString.cbegin(); charLocator != stlString.cend(); ++charLocator) {
        std::cout << "Character [" << charOffset++ << "] is: ";
        std::cout << *charLocator << std::endl; 
    }
    std::cout << std::endl;

    // C风格字符串
    std::cout << "The char* representation of the string is: ";
    std::cout << stlString.c_str() << std::endl;

    return 0;
}