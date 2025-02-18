#include "../../../include/std_lib_facilities.h"

int main()
{
    int value = -1;
    std::cout << "Please enter a int: \n";

    std::cin >> value;

    if (value % 2 == 0) {
        std::cout << "The value " << value << " is an even number\n";
    } else {
        std::cout << "The value " << value << " is not an even number\n";
    }

    return 0;
}