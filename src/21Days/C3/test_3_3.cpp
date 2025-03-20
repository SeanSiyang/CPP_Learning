#include <iostream>
#define _USE_MATH_DEFINES
// #include <math.h>
#include <cmath>

int main()
{
    double radius = 0.0;
    std::cout << "Please input the radius: ";
    std::cin >> radius;

    std::cout << "The area is " << 2 * radius * acos(-1.0) << "\n";
    std::cout << "The Circumference is " << acos(-1.0) * radius * radius << "\n"; 
    
    
    // std::cout << "The area is " << 2 * radius * M_PI << "\n";
    // std::cout << "The Circumference is " << M_PI * radius * radius << "\n"; 

}