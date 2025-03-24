#include <iostream>

int main()
{
    std::cout << "Enter two integers:" << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1;
    std::cin >> num2;

    bool isEqual = (num1 == num2);
    std::cout << "Result of equality test: " << isEqual << std::endl;

    bool isUnequal = (num1 != num2);
    std::cout << "Result of inequality test: " << isUnequal << std::endl;

    bool isGreaterThan = (num1 > num2);
    std::cout << "Result of " << num1 << " > " << num2;
    std::cout << " test: " << isGreaterThan << std::endl;

    bool isLessThan = (num1 < num2);
    std::cout << "Result of " << num1 << " < " << num2;
    std::cout << " test: " << isLessThan << std::endl;

    bool isGreaterThanEquals = (num1 >= num2);
    std::cout << "Result of " << num1 << " >= " << num2;
    std::cout << " test: " << isGreaterThanEquals << std::endl;

    bool isLessThanEquals = (num1 <= num2);
    std::cout << "Result of " << num1 << " <= " << num2;
    std::cout << " test: " << isLessThanEquals << std::endl;

    return 0;
}