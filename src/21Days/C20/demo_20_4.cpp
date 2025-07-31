#include <iostream>
#include <map>
#include <string>

template<typename T>
void DisplayContents(const T& cont) {
    for (auto element = cont.cbegin(); element != cont.cend(); ++element) {
        std::cout << element->first << " -> " << element->second << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    std::multimap<int, std::string> mmapIntToStr;

    //! 插入键值对
    mmapIntToStr.insert(std::make_pair(3, "Three"));
    mmapIntToStr.insert(std::make_pair(45, "Forty Five"));
    mmapIntToStr.insert(std::make_pair(-1, "Minus One"));
    mmapIntToStr.insert(std::make_pair(1000, "Thousand"));
    //! 插入重复键值对
    mmapIntToStr.insert(std::make_pair(-1, "Minus One"));
    mmapIntToStr.insert(std::make_pair(1000, "Thousand"));

    std::cout << "The multimap contains " << mmapIntToStr.size();
    std::cout << " key-value pairs. " << "They are: " << std::endl;
    DisplayContents(mmapIntToStr);

    //! 根据key删除元素
    auto numPairsErased = mmapIntToStr.erase(-1); //! 返回删除的元素数
    std::cout << "Erased " << numPairsErased << " pairs with -1 as key." << std::endl;

    //! 根据提供的迭代器删除元素
    auto pair = mmapIntToStr.find(45); //! 返回了一个迭代器
    //! 检查是否找到
    if (pair != mmapIntToStr.end()) {
        mmapIntToStr.erase(pair);
        std::cout << "Erased a pair with 45 as key using an itertor" << std::endl;
    }

    //! 删除一个范围内的元素
    std::cout << "Erasing the range of pairs with 1000 as key." << std::endl;
    mmapIntToStr.erase(mmapIntToStr.lower_bound(1000), mmapIntToStr.upper_bound(1000));

    std::cout << "The multimap now contains " << mmapIntToStr.size();
    std::cout << " key-value pair(s)." << "They are: \n";
    DisplayContents(mmapIntToStr);

    return 0;
}