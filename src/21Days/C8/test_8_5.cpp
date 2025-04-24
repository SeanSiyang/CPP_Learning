#include <iostream>

int main()
{
    int* pointToAnInt = new int;
    int* pNumberCopy = pointToAnInt;
    *pNumberCopy = 30;
    std::cout << *pointToAnInt;
    delete pNumberCopy;

    return 0;
}