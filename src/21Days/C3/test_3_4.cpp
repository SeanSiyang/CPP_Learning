#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

int main()
{
    // 使用列表初始化防止变量的窄化
    double radius { 0.0 };
    int result1 { 0 }, result2 { 0 };

    std::cout << "Please input the radius: ";
    std::cin >> radius;

    std::cout << "The area is " << 2 * radius * M_PI << "\n";
    std::cout << "The Circumference is " << M_PI * radius * radius << "\n"; 

    result1 = 2 * radius * M_PI;
    result2 = M_PI * radius * radius;

    std::cout << "Result1 is " << int(result1) << "\n";
    std::cout << "Result2 is " << int(result2) << "\n";

    return 0;
}