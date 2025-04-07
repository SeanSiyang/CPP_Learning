#include <iostream>

enum Colors {
    Violet = 0,
    Indigo,
    Blue,
    Green,
    Yellow,
    Orange,
    Red,
    Crimson,
    Beige,
    Brown,
    Peach,
    Pink,
    White,
};

int main()
{
    std::cout << "Here are the available colors:" << std::endl;
    std::cout << "Violet: " << Violet << std::endl;
    std::cout << "Indigo: " << Indigo << std::endl;
    std::cout << "Blue: " << Blue << std::endl;
    std::cout << "Green: " << Green << std::endl;
    std::cout << "Yellow: " << Yellow << std::endl;
    std::cout << "Orange: " << Orange << std::endl;
    std::cout << "Red: " << Red << std::endl;
    std::cout << "Beige: " << Beige << std::endl;
    std::cout << "Brown: " << Brown << std::endl;
    std::cout << "Peach: " << Peach << std::endl;
    std::cout << "Peach: " << Pink << std::endl;
    std::cout << "White: " << White << std::endl;

    std::cout << "Choose one by entering code: ";
    int yourChoice = Blue;
    
    std::cin >> yourChoice;

    switch (yourChoice) {
    case Red:
    case Orange:
    case Yellow:
    case Green:
    case Blue:
    case Indigo:
    case Violet:
        std::cout << "Bingo, your choice is a Rainbow color!" << std::endl;
        break;
    default:
        std::cout << "The color you choose is not in the rainbow.\n";
    }

    return 0;
}