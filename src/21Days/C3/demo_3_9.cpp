#include <iostream>

enum CardinalDirections
{
    North = 25,
    South,
    East,
    West
};

int main()
{
    std::cout << "Displaying directions and their symbolic values " << std::endl;
    std::cout << "North: " << North << std::endl;
    std::cout << "South: " << South << std::endl;
    std::cout << "East: " << East << std::endl;
    std::cout << "West: " << West << std::endl;

    CardinalDirections windDirection = South;
    std::cout << "Variable windDirection = " << windDirection << std::endl;


    return 0;
}