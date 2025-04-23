#include <iostream>

int main()
{
    int myNumbers[5];

    int* pointToNums = myNumbers;

    std::cout << "pointToNums = " << pointToNums << std::endl;

    std::cout << "&myNumbers[0] = " << &myNumbers[0] << std::endl;

    return 0;
}