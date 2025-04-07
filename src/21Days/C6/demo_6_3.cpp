#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    float num1 = 0.0, num2 = 0.0;

    std::cin >> num1;
    std::cin >> num2;

    std::cout << "Enter 'd' to divide, anything else to multiply: ";
    char userSelection = '\0';
    std::cin >> userSelection;

    if (userSelection == 'd') {
        std::cout << "You wish to divide!" << std::endl;
        if (num2 != 0) 
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        else
            std::cout << "Division by zero is not allowed" << std::endl;
    } else {
        std::cout << "You wish to multiply!" << std::endl;
        std::cout << num1 << " x " << num2 << " = " << num1 * num2 << std::endl; 
    }
    
    return 0;
}