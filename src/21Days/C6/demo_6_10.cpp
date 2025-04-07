#include <iostream>

int main()
{
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = { 0 };

    std::cout << "Populate array of " << ARRAY_LENGTH << " integers" << std::endl;

    for (int counter = 0; counter < ARRAY_LENGTH; ++counter) {
        std::cout << "Enter an integer for element " << counter << ": ";
        std::cin >> myNums[counter];
    }

    std::cout << "Displaying contents of the array: " << std::endl;
    for (int counter = 0; counter < ARRAY_LENGTH; ++counter) 
        std::cout << "Element " << counter << " = " << myNums[counter] << std::endl;
    
    return 0;
}