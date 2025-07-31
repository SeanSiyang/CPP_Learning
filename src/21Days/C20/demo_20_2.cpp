#include <map>
#include <iostream>
#include <string>

//! 给模板类设置别名
typedef std::map<int, std::string> MAP_INT_STRING;
typedef std::multimap<int, std::string> MMAP_INT_STRING;

//! DisplayContents 使用迭代器访问表示键的first和表示值的second
template<typename T>
void DisplayContents(const T& cont) {
    for (auto element = cont.cbegin(); element != cont.cend(); ++element) {
        std::cout << element->first << " -> " << element->second << std::endl; 
    }

    std::cout << std::endl;
}

int main()
{
    MAP_INT_STRING mapIntToStr;

    //! 插入元素
    mapIntToStr.insert(MAP_INT_STRING::value_type(3, "Three"));
    mapIntToStr.insert(std::make_pair(-1, "Minus One"));
    mapIntToStr.insert(std::pair<int, std::string>(1000, "One Thousand"));
    mapIntToStr[1000000] = "One Million";

    std::cout << "The map contains " << mapIntToStr.size();
    std::cout << " key-value pairs. They are: " << std::endl;
    DisplayContents(mapIntToStr);

    //! 使用map来初始化mmap
    MMAP_INT_STRING mmapIntToStr(mapIntToStr.cbegin(), mapIntToStr.cend());
    //! multimap支持重复的键值对
    mmapIntToStr.insert(std::make_pair(1000, "Thousand"));

    std::cout << std::endl << "The multimap contains " << mmapIntToStr.size();
    std::cout << " key-value pairs. They are: " << std::endl;
    
    std::cout << "The elements in the multimap are: " << std::endl;
    DisplayContents(mmapIntToStr);

    //! multimap可以返回相同键的个数
    std::cout << "The number of pairs in the multimap with 1000 as their key: "
        << mmapIntToStr.count(1000) << std::endl; 
    
    return 0;
}