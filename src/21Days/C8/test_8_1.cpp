#include <iostream>

int main()
{
    int number = 3;
    int* pNum1 = &number;
    *pNum1 = 20;
    int* pNum2 = pNum1;
    number *= 2;
    std::cout << *pNum2;

    return 0;
}