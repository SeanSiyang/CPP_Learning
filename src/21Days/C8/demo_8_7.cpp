#include <iostream>

int main() 
{
    int* pointsToAge = new int;
    std::cout << "Enter your dog's age: ";
    std::cin >> *pointsToAge;

    std::cout << "Age " << *pointsToAge << " is stored at " << pointsToAge << std::endl;

    delete pointsToAge;
    
    return 0;
}