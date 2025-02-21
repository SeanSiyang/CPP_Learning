#include "../../../include/std_lib_facilities.h"

int square_add(int x) 
{
    int result = 0;
    for (int i = 0; i < x; i++) {
        result += x;
    }

    return result;
    
}

int square(int x)
{
    return x * x;
}

int main()
{
    std::cout << square_add(2) << "\n";
    std::cout << square_add(10) << "\n";
    std::cout << square(2) << "\n";
    std::cout << square(10) << "\n";
    return 0;
}