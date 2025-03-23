#include <iostream>
#include <vector>

int main()
{
    std::vector<int> dynArray(3);

    dynArray[0] = 365;
    dynArray[1] = -421;
    dynArray[2] = 789;

    std::cout << "Number of integers in array: " << dynArray.size() << "\n";

    std::cout << "Enter another element to insert" << "\n";
    int newValue = 0;
    std::cin >> newValue;
    dynArray.push_back(newValue);

    std::cout << "Number of integers in array: " << dynArray.size() << "\n";
    std::cout << "Last element in array: ";
    std::cout << dynArray[dynArray.size() - 1] << "\n";

    int arr[3] = { 1, 2, 3 };
    std::cout << sizeof(arr) << std::endl;
    std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl;

    return 0;
}