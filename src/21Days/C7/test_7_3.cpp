#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>


void Calculate(double radius, double &area, double &circum)
{
    area = M_PI * radius * radius;
    circum = M_PI * radius * 2.0;
}


int main()
{
    double radius = 0.0;
    std::cout << "Enter a radius: ";
    std::cin >> radius;

    double area = 0.0, circum = 0.0;
    Calculate(radius, area, circum);

    std::cout << "area:" << area << std::endl;
    std::cout << "circum:" << circum;

    return 0;
}