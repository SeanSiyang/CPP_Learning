#include <iostream>

int main()
{
    const int numsToCalculate = 5;
    std::cout << "This program will calculate " << numsToCalculate
    << " Fibonacci Numbers at a time" << std::endl;

    int num1 = 0, num2 = 1;

    char wantMore = '\0';
    std::cout << num1 << " " << num2 << " ";

    do {
        for (int counter = 0; counter < numsToCalculate; ++counter) {
            std::cout << num1 + num2 << " ";
            int num2Temp = num2;    // 存储num2旧值，赋值给num1
            num2 = num1 + num2;     // 更新num2
            num1 = num2Temp;
        }

        std::cout << std::endl << "Do you want more numbers (y/n)?";
        std::cin >> wantMore;
        
    } while(wantMore == 'y');

    std::cout << "Goodbye!" << std::endl;

    return 0;
}