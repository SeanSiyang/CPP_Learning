#include "../../../include/std_lib_facilities.h"

int main()
{
    int val1 = 0, val2 = 0, val3 = 0;

    std::cout << "Please enter three numbers: \n";

    std::cin >> val1 >> val2 >> val3;

    if (val1 > val2) {
        int temp = val1;
        val1 = val2;
        val2 = temp;
    } 
    
    if (val1 > val3) {
        int temp = val1;
        val1 = val3;
        val3 = temp;
    } 
    
    if (val2 > val3) {
        int temp = val2;
        val2 = val3;
        val3 = temp;
    }

    std::cout << val1 << ", " << val2 << ", " << val3 << "\n";

    return 0;
}