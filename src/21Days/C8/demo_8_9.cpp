#include <iostream>

int main()
{
    std::cout << "How many integers you wish to enter?";
    int numEntries = 0;
    std::cin >> numEntries;

    int* pointsToInts = new int[numEntries];

    std::cout << "Allocated for " << numEntries << " integers" << std::endl;
    for (int counter = 0; counter < numEntries; ++counter) {
        std::cout << "Enter number " << counter << ": ";
        std::cin >> *(pointsToInts + counter);
    }

    std::cout << "Displaying all numbers entered: " << std::endl;
    for (int counter = 0; counter < numEntries; ++counter) 
        std::cout << *(pointsToInts++) << std::endl;

    std::cout << "\n";

    // return pointer to initial position
    pointsToInts -= numEntries;

    // done with using memory? release
    delete[] pointsToInts;

    return 0;
}