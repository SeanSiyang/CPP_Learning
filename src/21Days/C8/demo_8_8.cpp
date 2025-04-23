#include <iostream>
#include <string>

int main()
{
    std::cout << "How many integers shall I reserve memory for?" << std::endl;
    int numEntries = 0;
    std::cin >> numEntries;

    int* myNumbers = new int[numEntries];

    std::cout << "Memory allocated at: " << myNumbers << std::endl;

    delete[] myNumbers;

    return 0;
}