#include "../../../include/std_lib_facilities.h"

int main()
{
    for (int i = 0; i < 24; i++) {
        std::cout << char('a' + i) << "\t" << int('a' + i) << "\n";
    }

    for (int i = 0; i < 24; i++) {
        std::cout << char('A' + i) << "\t" << int('A' + i) << "\n";
    }

    for (int i = 0; i < 10; i++) {
        std::cout << i << "\n";
    }

    return 0;
}