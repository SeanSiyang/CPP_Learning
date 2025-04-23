#include <iostream>

int main()
{
    std::cout << "Is it sunny (y / n)?";
    char userInput = 'y';
    std::cin >> userInput;

    bool* const isSunny = new bool;

    *isSunny = true;

    if (userInput == 'n')
        *isSunny = false;

    std::cout << "Boolean flag sunny says: " << *isSunny << std::endl;

    delete isSunny;
}