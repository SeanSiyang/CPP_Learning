#include <iostream>

int main()
{
    int num1 = 0, num2 = 1;

    std::cout << "Please input the number to calculate\n";
    int numsToCalculate = -1;
    std::cin >> numsToCalculate;
    std::cout << num1 << " " << num2 << " ";
    
    char wantContinue = '\0';

    // do {
    //     int num2Temp = num2;
    //     num2 = num1 + num2;
    //     num1 = num2Temp;

    //     std::cout << num2 << " ";
    //     --numsToCalculate;
    // } while (numsToCalculate != 0);
    do {
        if (wantContinue == 'y') {
            num1 = 0, num2 = 1;
            std::cout << "Please input the number to calculate\n";
            std::cin >> numsToCalculate;
            std::cout << num1 << " " << num2 << " ";
        }

        for (int counter = 0; counter < numsToCalculate; ++counter) {
            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;
            std::cout << num2 << " ";
        }

        std::cout << "Please press y to continue the program.\n";
        std::cin >> wantContinue;
    } while (wantContinue == 'y');
    


    return 0;
}