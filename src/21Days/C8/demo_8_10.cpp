#include <iostream>

void CalcArea(const double* const ptrPi,        // const pointer to const data
            const double* const ptrRadius,      // i.e. no changes allowed
            double* const ptrArea)              // can change data pointed to
{
    if (ptrPi && ptrRadius && ptrArea)  // 检查指针的有效性
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}

int main()
{
    const double Pi = 22.0 / 7;
    std::cout << "Enter radius of circle: ";
    double radius = 0.0;
    std::cin >> radius;

    double area = 0.0;

    CalcArea(&Pi, &radius, &area);

    std::cout << "Area is = " << area << std::endl;

    return 0;
}
