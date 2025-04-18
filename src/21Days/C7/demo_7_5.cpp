#include <iostream>

int GetFibNumber(int fibIndex)
{
    if (fibIndex < 2)     // 退出递归的条件
        return fibIndex;
    else    // recursion if fibIndex >= 2
        return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
}

int main()
{
    std::cout << "Enter 0-based index of desired Fibonacci Number:";
    int index = 0;
    std::cin >> index;

    std::cout << "Fibonacci number is: " << GetFibNumber(index) << std::endl;

    return 0;
}