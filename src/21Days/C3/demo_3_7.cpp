#include <iostream>

int main()
{
    const double pi = 22.0 / 7;
    std::cout << "The value of constant pi is: " << pi << std::endl;

    // pi = 345;   // error: assignment of read-only variable 'pi'

    return 0;
}