#include "../../../include/std_lib_facilities.h"

int main()
{
    std::string oper {" "};
    double val1 { 0.0 }, val2 { 0.0 };

    std::cin >> oper >> val1 >> val2;

    if (oper == "+") {
        std::cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
    } else if (oper == "-") {
        std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
    } else if (oper == "*") {
        std::cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
    } else if (oper == "/") {
        std::cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
    }

    return 0;
}