#include <iostream>

int main()
{
    try
    {
        int* pointToManyNums = new int[0x1fffffff];
        delete[] pointToManyNums;
    }
    catch(std::bad_alloc)
    {
        std::cerr << "Memory allocation failed. Ending program." << '\n';
    }
    
    return 0;
}