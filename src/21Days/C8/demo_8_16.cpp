#include <iostream>


int main()
{
    // Request LOTS of memory space, use nothrow
    int* pointsToManyNums = new(std::nothrow) int[0x1fffffff];

    if (pointsToManyNums) {
        delete[] pointsToManyNums;
    }
    else
        std::cout << "Memory allocation failed. Ending program" << std::endl;

    return 0;
}