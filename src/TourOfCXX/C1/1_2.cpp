// import std;
#include <iostream>

using namespace std;

double square(double x)
{
    return x * x;
}

void print_square(double x)
{
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
    // std::cout << ((1 <=> 0) > 0) << std::endl;
    // std::cout << "Hello, World!\n";
    print_square(1.234);
}