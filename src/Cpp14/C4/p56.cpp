#include "../../../include/std_lib_facilities.h"

int main()
{
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 0;

    std::cout << "Please enter a length followed by a unit (c or i):\n";

    std::cin >> length >> unit;

    if (unit == 'i')
        std::cout << length << "in == " << cm_per_inch * length << "cm\n";
    else if (unit == 'c')
        std::cout << length << "cm == " << length / cm_per_inch << "in\n";
    else
        std::cout << "Sorry, I don't know a unit called '" << unit << "'\n";

    return 0;
}