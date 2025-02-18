#include "../../../include/std_lib_facilities.h"

int main()
{
    std::cout << "Please enter a number of miles: \n";
    double miles = 0.0;
    std::cin >> miles;

    std::cout << "the result is " << miles * 1.609 << " km\n";

    return 0;
}