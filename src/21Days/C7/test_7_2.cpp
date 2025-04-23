#include <iostream>

void ProcessArray(double numbers[], int length);

void DisplayArrays(double* myArrs, int length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << myArrs[i] << std::endl;
    }
}

int main()
{
    double myNums[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    DisplayArrays(myNums, 10);

    return 0;

}