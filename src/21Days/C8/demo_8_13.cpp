#include <iostream>

int main()
{
    // uninitialized pointer
    bool* isSunny;

    std::cout << "Is it sunny (y/n)? ";
    char userInput = 'y';
    std::cin >> userInput;

    if (userInput == 'y') {
        isSunny = new bool;
        *isSunny = true;
    }

    // 如果没有执行y的内容，此时isSunny指向未知内存，会报错
    std::cout << "Bolean flag sunny says:" << *isSunny << std::endl;

    // 
    delete isSunny;

    std::cout << "safe" << "\n";


    return 0;
}