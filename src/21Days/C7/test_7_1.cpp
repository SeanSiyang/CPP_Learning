#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

double Volume(double radius) 
{
    return (4 * M_PI * radius * radius * radius) / 3.0;
}

double Volume(double radius, double height)
{
    return M_PI * radius * radius * height;
}

int main()
{
    std::cout << "Enter radius: ";
    double radius = 0.0;
    std::cin >> radius;

    double result1 = Volume(radius);

    std::cout << "Enter height: ";
    double height = 0.0;
    std::cin >> height;
    double result2 = Volume(radius, height);

    std::cout << "Volume of sphere = " << result1 << std::endl;
    std::cout << "Volume of a cylinder = " << result2 << std::endl;

    return 0;
}