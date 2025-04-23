#include <iostream>

int main()
{
    int original = 30;
    std::cout << "original = " << original << "\n";
    std::cout << "original is at address: " << std::hex << &original << "\n";

    int& ref1 = original;
    std::cout << "ref is at address: " << std::hex << &ref1 << "\n";

    int& ref2 = ref1;
    std::cout << "ref2 is at address: " << std::hex << &ref2 << "\n";
    std::cout << "Therefore, ref2 = " << std::dec << ref2 << "\n";

    return 0;
}