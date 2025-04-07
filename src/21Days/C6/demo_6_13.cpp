#include <iostream>

int main() 
{
    for (;;) {
        std::cout << "Enter two integers: " << std::endl;
        int num1 = 0, num2 = 0;
        std::cin >> num1;
        std::cin >> num2;

        std::cout << "Do you wish to correct the numbers? (y/n)";
        char changeNumbers = '\0';
        std::cin >> changeNumbers;

        if (changeNumbers == 'y')
            continue;
        
        std::cout << num1 << " x " << num2 << " = " << num1 * num2 << std::endl;
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;

        std::cout << "Press x to exit or any other key to recalculate" << std::endl;
        char userSelection = '\0';
        std::cin >> userSelection;

        if (userSelection == 'x')
            break;
    }

    std::cout << "Goodbye" << std::endl;

    return 0;
}