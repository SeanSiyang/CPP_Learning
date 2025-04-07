#include <iostream>
#include <string>

int main()
{
    int someNums[] = { 1, 101, -1, 40, 2040 };
    
    for (const int& aNum : someNums) 
        std::cout << aNum << " ";
    std::cout << std::endl;

    for (auto anElement : { 5, 222, 110, -45, 2017 })
        std::cout << anElement << " ";
    std::cout << std::endl;

    char charArray[] = { 'h', 'e', 'l', 'l', 'o' };
    for (auto aChar : charArray)
        std::cout << aChar << " ";
    std::cout << std::endl;

    double moreNums[] = { 3.14, -1.3, 22, 10101 };
    for (auto anElement : moreNums)
        std::cout << anElement << " ";
    std::cout << std::endl;

    std::string sayHello { "Hello World!" };
    for (auto anElement : sayHello) 
        std::cout << anElement << " ";
    std::cout << std::endl;

    return 0;
}