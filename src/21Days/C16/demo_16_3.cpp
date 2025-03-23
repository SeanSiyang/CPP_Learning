#include <iostream>
#include <string>

int main()
{
    std::string sampleStr1("Hello");
    std::string sampleStr2(" String!");

    sampleStr1 += sampleStr2;
    std::cout << sampleStr1 << std::endl << std::endl;

    std::string sampleStr3(" Fun is not needing to use pointers!");
    sampleStr1.append(sampleStr3);
    std::cout << sampleStr1 << std::endl << std::endl;

    const char* constCStyleString = " You however still can!";
    sampleStr1.append(constCStyleString);
    std::cout << sampleStr1 << std::endl;

    return 0;
}