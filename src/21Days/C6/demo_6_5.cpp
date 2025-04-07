#include <iostream>

int main()
{
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
    };

    std::cout << "Find what days of the week are named after!" << std::endl;
    std::cout << "Enter a number for a day (Sunday = 0): ";

    int dayInput = Sunday;
    std::cin >> dayInput;

    switch (dayInput)
    {
    case Sunday:
        std::cout << "Sunday was named after the Sun" << std::endl;
        break;
    case Monday:
        std::cout << "Monday was named after the Moon" << std::endl;
        break;
    case Tuesday:
        std::cout << "Tuesday was named after Mars" << std::endl;
        break;
    case Wednesday:
        std::cout << "Wednesday was named after Mercury" << std::endl;
        break;
    case Thursday:
        std::cout << "Thursday was named after Jupiter" << std::endl;
        break;
    case Friday:
        std::cout << "Friday was named after Venus" << std::endl;
        break;
    case Saturday:
        std::cout << "Saturday was named after Saturn" << std::endl;
        break;
    default:
        std::cout << "Wrong input, execute again" << std::endl;
        break;
    }

    return 0;
}