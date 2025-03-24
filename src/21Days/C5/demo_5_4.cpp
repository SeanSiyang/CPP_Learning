#include <iostream>

int main()
{
    std::cout << "Enter true(1) or false(0) for two operands:" << std::endl;

    bool op1 = false, op2 = false;

    std::cin >> op1;
    std::cin >> op2;

    std::cout << op1 << " AND " << op2 << " = " << (op1 && op2) << std::endl;
    std::cout << op1 << " OR " << op2 << " = " << (op1 || op2) << std::endl;

    return 0;
}