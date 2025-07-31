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
    //! 实例化对象，键为int，值为string
    std::map<int, std::string> mapIntToStr1;
    std::multimap<int, std::string> mmapIntToStr1;

    //! 拷贝构造
    std::map<int, std::string> mapIntToStr2(mapIntToStr1);
    std::multimap<int, std::string> mmapIntToStr2(mmapIntToStr1);

    //! 使用其他map或multimap中指定范围内的值进行初始化
    std::map<int, std::string> mapIntToStr3(mapIntToStr1.cbegin(), mmapIntToStr1.cend());
    std::multimap<int, std::string> mmapIntToStr3(mmapIntToStr1.cbegin(), mmapIntToStr1.cend());
    //! 自定义排序标准，默认排序标准是std::less<T>，将让map按升序排列
    std::map<int, std::string, ReverseSort<int>> mapIntToStr4;
    std::multimap<int, std::string, ReverseSort<int>> mmapIntToStr4(
        mapIntToStr1.cbegin(), mapIntToStr1.cend());

    return 0;
}