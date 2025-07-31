#include <iostream>
#include <string>
#include <unordered_map>

template<typename T1, typename T2>
void DisplayUnorderedMap(std::unordered_map<T1, T2>& cont) {
    std::cout << "Unorderd map contains: " << std::endl;

    for (auto element = cont.cbegin(); element != cont.cend(); ++element) {
        std::cout << element->first << " -> " << element->second << std::endl;
    }

    std::cout << "Number of pair, size(): " << cont.size() << "\n";
    std::cout << "Bucket count = " << cont.bucket_count() << "\n";
    std::cout << "Current load factor: " << cont.load_factor() << "\n";
    std::cout << "Max load factor: " << cont.max_load_factor() << "\n";
}

int main() {
    std::unordered_map<int, std::string> umapIntToStr;
    umapIntToStr.insert(std::make_pair(1, "One"));
    umapIntToStr.insert(std::make_pair(45, "Forty Five"));
    umapIntToStr.insert(std::make_pair(1001, "Thousand One"));
    umapIntToStr.insert(std::make_pair(-2, "Minus Two"));
    umapIntToStr.insert(std::make_pair(-1000, "Minus One Thousand"));
    umapIntToStr.insert(std::make_pair(100, "One Hundred"));
    umapIntToStr.insert(std::make_pair(12, "Twelve"));
    umapIntToStr.insert(std::make_pair(-100, "Minus One Hundred"));

    DisplayUnorderedMap<int, std::string>(umapIntToStr);

    std::cout << "Inserting one more element\n";
    umapIntToStr.insert(std::make_pair(300, "Three Hundred"));
    DisplayUnorderedMap<int, std::string>(umapIntToStr);

    std::cout << "Enter key to find for: \n";
    int Key = 0;
    std::cin >> Key;

    auto element = umapIntToStr.find(Key);
    if (element != umapIntToStr.end()) {
        std::cout << "Found, Key pairs with value " << element->second << std::endl;
    } else {
        std::cout << "Key has no corresponding pair value!\n";
    }

    return 0;
}