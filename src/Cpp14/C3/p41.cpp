#include <iostream>

int main()
{
    int a = 20000;
    char c = a;
    int b = c;
    if (a != b)
        std::cout << "oops!: " << a << " != " << b << '\n';
    else
        std::cout << "Wow! We have large characters\n";

    std::cout << "b is : " << b << '\n';

    return 0;
}