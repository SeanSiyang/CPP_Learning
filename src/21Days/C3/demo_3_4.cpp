#include <iostream>

int main()
{
    unsigned short uShortValue = 65535;
    std::cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    std::cout << ++uShortValue << std::endl;

    short signedShort = 32767;
    std::cout << "Incrementing signed short " << signedShort << " gives: ";
    std::cout << ++signedShort << std::endl;

    return 0;
}