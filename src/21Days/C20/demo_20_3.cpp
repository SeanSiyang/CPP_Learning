#include <map>
#include <iostream>
#include <string>

template<typename T>
void DisplayContents(const T& cont) {
    for (auto element = cont.cbegin();
        element != cont.cend();
        ++element)
        std::cout << element->first << " -> " << element->second << "\n";
    
    std::cout << std::endl;
}

int main()
{
    std::map<int, std::string> mapIntToStr;

    mapIntToStr.insert(std::make_pair(3, "Three"));
    mapIntToStr.insert(std::make_pair(45, "Forty Five"));
    mapIntToStr.insert(std::make_pair(-1, "Minus One"));
    mapIntToStr.insert(std::make_pair(1000, "Thousand"));

    std::cout << "The map contains " << mapIntToStr.size();
    std::cout << " key-value pairs. They are: " << std::endl;
    DisplayContents(mapIntToStr);

    std::cout << "Enter the key you with to find: ";
    int key = 0;
    std::cin >> key;

    auto pairFound = mapIntToStr.find(key);
    if (pairFound != mapIntToStr.end()) {
        std::cout << "Key " << pairFound->first << " points to Value: ";
        std::cout << pairFound->second << "\n";
    }
    else {
        std::cout << "Sorry, pair with key " << key << " not in map " << "\n";
    }

    return 0;
}