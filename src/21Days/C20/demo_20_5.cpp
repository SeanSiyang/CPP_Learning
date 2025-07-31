#include <iostream>
#include <map>
#include <string>
#include <algorithm>

template<typename T>
void DisplayContents(const T& cont) {
    for (auto element = cont.cbegin(); element != cont.cend(); ++element) {
        std::cout << element->first << " -> " << element->second << std::endl;
    }
    std::cout << std::endl;
}

struct PredIgnoreCase
{
    bool operator() (const std::string& str1, const std::string& str2) const {
        std::string str1NoCase(str1), str2NoCase(str2);
        std::transform(str1.begin(), str1.end(), str1NoCase.begin(), ::tolower);
        std::transform(str2.begin(), str2.end(), str2NoCase.begin(), ::tolower);

        return (str1NoCase < str2NoCase);
    }
};

typedef std::map<std::string, std::string> DIR_WITH_CASE;
typedef std::map<std::string, std::string, PredIgnoreCase> DIR_NOCASE;

int main() {
    DIR_WITH_CASE dirWithCase;
    dirWithCase.insert(std::make_pair("John", "2345764"));
    dirWithCase.insert(std::make_pair("JOHN", "2345764"));
    dirWithCase.insert(std::make_pair("Sara", "42367236"));
    dirWithCase.insert(std::make_pair("Jack", "32435348"));

    std::cout << "Displaying contents of the case-sensitve map:\n";
    DisplayContents(dirWithCase);

    DIR_NOCASE dirNoCase(dirWithCase.begin(), dirWithCase.end());
    std::cout << "Displaying contents of the case-insensitive map: " << std::endl;

    DisplayContents(dirNoCase);

    std::cout << "Please enter a name to search" << std::endl << "> ";
    std::string name;
    std::cin >> name;

    auto pairWithCase = dirWithCase.find(name);
    if (pairWithCase != dirWithCase.end()) {
        std::cout << "Num in case-sens. dir: " << pairWithCase->second << std::endl;
    } else {
        std::cout << "Num not found in the case-insensitive directory" << std::endl;
    }

    return 0;
}