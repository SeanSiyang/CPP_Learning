#include <iostream>

int main()
{
    char userSelection = 'm';
    
    while (userSelection != 'x') {
        std::cout << "Enter the two integers: " << std::endl;
        int num1 = 0, num2 = 0;
        std::cin >> num1;
        std::cin >> num2;

        std::cout << num1 << " x " << num2 << " = " << num1 * num2 << std::endl;
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;

        std::cout << "Press x to exit(x) or any other key to recalculate" << std::endl;
        std::cin >> userSelection;
    }

    std::cout << "Goodbye" << std::endl;
    
    return 0;
}