#include "../../../include/std_lib_facilities.h"

int main()
{
    int pennies = -1.0;
    int nickels = -1.0;
    int dimes = -1.0;
    int quarters = -1.0;
    int half_dollars = -1.0;
    int one_dollar = -1.0;

    std::cout << "How many pennies do you have?\n";
    std::cin >> pennies;

    std::cout << "How many nickels do you have?\n";
    std::cin >> nickels;

    std::cout << "How many dimes do you have?\n";
    std::cin >> dimes;
    
    std::cout << "How many quarters do you have?\n";
    std::cin >> quarters;

    std::cout << "How many half dollars do you have?\n";
    std::cin >> half_dollars;
    
    std::cout << "How many one dollar do you have?\n";
    std::cin >> one_dollar;

    std::cout << "You have " << pennies << " pennies.\n";
    std::cout << "You have " << nickels << " nickels.\n";
    std::cout << "You have " << dimes << " dimes.\n";
    std::cout << "You have " << quarters << " quarters.\n";
    std::cout << "You have " << half_dollars << " half dollars.\n";
    std::cout << "You have " << one_dollar << " one dollar.\n";

    std::cout << "The value of all of your coins is " 
            << pennies + nickels * 5 + dimes * 10 + quarters * 25 +
            half_dollars * 50 + one_dollar * 100 << " cents.\n"; 

    return 0;
}