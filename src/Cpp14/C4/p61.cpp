#include "../../../include/std_lib_facilities.h"

int main()
{
    int i = 0;
    while (i < 24) {
        std::cout << char('a' + i) << " " << int('a' + i) << "\n";
        i++;
    }

    return 0;
}