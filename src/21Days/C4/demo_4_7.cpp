#include <iostream>
#include <string>

int main()
{
    std::string greetString("Hello std::string");
    std::cout << greetString << std::endl;

    std::cout << "Enter a line of text: " << std::endl;
    std::string firstLine;
    std::getline(std::cin, firstLine);

    std::cout << "Enter another: " << std::endl;
    std::string secondLine;
    std::getline(std::cin, secondLine);

    std::cout << "Result of concatenation: \n";
    std::string concatString = firstLine + " " + secondLine;
    std::cout << concatString << std::endl;

    std::cout << "Copy of concatenated string: \n";
    std::string aCopy;
    aCopy = concatString;
    std::cout << aCopy << std::endl;

    std::cout << "Length of concat string: " << concatString.length() << std::endl;

    return 0;
}