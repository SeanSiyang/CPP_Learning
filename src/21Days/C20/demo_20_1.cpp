#include <map>
#include <string>

template<typename keyType>
struct ReverseSort
{
    bool operator() (const keyType& key1, const keyType& key2)
    {
        return (key1 > key2);
    }
};

int main() {
    std::map<int, std::string> mapIntToStr1;
    
    std::multimap<int, std::string> mmapIntToStr1;

    std::map<int, std::string> mapIntToStr2(mapIntToStr1);
    std::multimap<int, std::string> mmapIntToStr2(mmapIntToStr1);

    std::map<int, std::string> mapIntToStr3(mapIntToStr1.cbegin(), mmapIntToStr1.cend());
    std::multimap<int, std::string> mmapIntToStr3(mmapIntToStr1.cbegin(), mmapIntToStr1.cend());

    std::map<int, std::string, ReverseSort<int>> mapIntToStr4;
    std::multimap<int, std::string, ReverseSort<int>> mmapIntToStr4(
        mapIntToStr1.cbegin(), mapIntToStr1.cend()
    );

    return 0;
}