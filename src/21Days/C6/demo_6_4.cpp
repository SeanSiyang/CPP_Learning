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

    if (dayInput == Sunday)
        std::cout << "Sunday was named after the Sun" << std::endl;
    else if (dayInput == Monday)
        std::cout << "Monday was named after the Moon" << std::endl;
    else if (dayInput == Tuesday)
        std::cout << "Tuesday was named after Mars" << std::endl;
    else if (dayInput == Wednesday)
        std::cout << "Wednesday was named after Mercury" << std::endl;
    else if (dayInput == Thursday)
        std::cout << "Thursday was named after Jupiter" << std::endl;
    else if (dayInput == Friday)
        std::cout << "Friday was named after Venus" << std::endl;
    else if (dayInput == Saturday)
        std::cout << "Saturday was named after Saturn" << std::endl;
    else
        std::cout << "Wrong input, execute again" << std::endl;

    return 0;
}