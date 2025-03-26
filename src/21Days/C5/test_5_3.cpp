#include <iostream>

int main()
{
    bool value1 = false;
    bool value2 = false;

    std::cout << "Enter two boolean value true(1) or false(0):" << std::endl;
    std::cin >> value1 >> value2;

    std::cout << "Result of bitwise operators on these operands: " << std::endl;

    std::cout << "Bitwise AND: " << value1 << " & " << value2 << " = " << (value1 & value2) << std::endl;
    std::cout << "Bitwise OR: " << value1 << " | " << value2 << " = " << (value1 | value2) << std::endl;
    std::cout << "Bitwise XOR: " << value1 << " ^ " << value2 << " = " << (value1 ^ value2) << std::endl;

    return 0;
}