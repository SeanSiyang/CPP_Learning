#include <iostream>

int main()
{
    const int ARRAY_LEN = 5;
    int myNums[ARRAY_LEN] = { -55, 45, 9889, 0, 45 };

    for (int index = ARRAY_LEN - 1; index >= 0; --index) {
        std::cout << "myNums[" << index << "] = " << myNums[index] << std::endl;
    }

    return 0;
}