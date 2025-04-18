#include <iostream>

void DisplayArray(int numbers[], int length)
{
    for (int index = 0; index < length; ++index)
        std::cout << numbers[index] << " ";
    std::cout << std::endl;

    return;
}

void DisplayArray(char characters[], int length)
{
    for (int index = 0; index < length; ++index)
        std::cout << characters[index] << " ";
    std::cout << std::endl;

    return;
}

int main()
{
    int myNums[4] = { 24, 58, -1, 245 };
    DisplayArray(myNums, 4);

    char myStatement[7] = { 'H', 'e', 'l', 'l', '0', '!', '\0' };
    DisplayArray(myStatement, 7);

    return 0;
}