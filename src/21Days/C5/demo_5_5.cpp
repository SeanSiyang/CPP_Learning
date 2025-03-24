#include <iostream>

int main()
{
    std::cout << "Use boolean values(0 / 1) to answer the questions" << std::endl;
    std::cout << "Is it raining?";
    bool isRaining = false;

    std::cin >> isRaining;

    std::cout << "Do you have buses on the streets?";
    bool busesPly = false;
    std::cin >> busesPly;

    if (isRaining && !busesPly) 
        std::cout << "You cannot go to work" << std::endl;
    else
        std::cout << "You can go to work" << std::endl;

    if (isRaining && busesPly)
        std::cout << "Take an umbrella" << std::endl;

    if ((!isRaining) && busesPly)
        std::cout << "Enjoy the sun and have a nice day" << std::endl;

    return 0;
}