#include "../../../include/std_lib_facilities.h"

int main()
{
    double val1 = 0, val2 = 0;

    std::cout << "Enter two numbers to the val1 and val2: \n";
    std::cin >> val1 >> val2;

    std::cout << "the max between these two numbers is :" << max(val1, val2) << "\n";

    std::cout << "the min between these two numbers is :" << min(val1, val2) << "\n";

    std::cout << "the sum of these two numbers is :" << val1 + val2 << "\n";

    std::cout << "the diff of these two numbers is :" << val1 - val2 << "\n";

    std::cout << "the multi of these two numbers is :" << val1 * val2 << "\n";

    std::cout << "the ratio of these two numbers is :" << val1 / val2 << "\n";

    return 0;
}