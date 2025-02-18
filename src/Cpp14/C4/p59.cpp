#include "../../../include/std_lib_facilities.h"

int main()
{
    // rmb --> dollar
    constexpr double dollar_per_rmb = 7.2869;
    constexpr double rmb_per_dollar = 0.1372;

    double number = 1;
    char unit = 'a';

    std::cout << "Please enter a rmb followed by a unit (rmb or dollar):\n";
    std::cin >> number >> unit;

    switch (unit) {
        case 'd':
            std::cout << number << " dollar in == " << dollar_per_rmb * number << " rmbs.\n";
            break;
        case 'r':
            std::cout << number << " rmb in == " << number / dollar_per_rmb << " dollars.\n";
            break;
    }

    return 0;
}