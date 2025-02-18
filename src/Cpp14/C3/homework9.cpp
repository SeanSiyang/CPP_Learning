#include "../../../include/std_lib_facilities.h"

int main()
{
    std::string value = " ";
    std::cout << "Please enter a number: \n";
    std::cin >> value;

    if (value == "zero") {
        std::cout << 0 << "\n";
    } else if (value == "one") {
        std::cout << 1 << "\n";
    } else if (value == "two") {
        std::cout << 2 << "\n";
    } else if (value == "three") {
        std::cout << 3 << "\n";
    } else if (value == "four") {
        std::cout << 4 << "\n";
    } else {
        std::cout << "Stupid computer!\n";
    }

    return 0;
}