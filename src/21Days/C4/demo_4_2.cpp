#include <iostream>

constexpr int Square(int number) { return number * number; }

int main()
{
    const int ARRAY_LENGTH = 5;
    
    int myNumbers[ARRAY_LENGTH] = { 5, 10, 0, -101, 20 };

    int moreNumbers[Square(ARRAY_LENGTH)];

    std::cout << "Enter index of the element to be changed: ";
    int elementIndex = 0;
    std::cin >> elementIndex;

    std::cout << "Enter new value: ";
    int newValue = 0;
    std::cin >> newValue;

    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;

    std::cout << "Element " << elementIndex << " in array myNumbers is: ";
    std::cout << myNumbers[elementIndex] << std::endl;

    std::cout << "Element " << elementIndex << " in array moreNumbers is: ";
    std::cout << moreNumbers[elementIndex] << std::endl;

    return 0;
}

