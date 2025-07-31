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
    //! 自定义谓词：实现了字符串的忽略大小写排序
    //! 重载()运算符，让这个结构体成为了一个函数对象（functor）
    //! 函数对象可以像函数一样被调用，因为std::map要求的排序谓词格式，这种格式需要可调用性
    //! 参数列表中的const保证不修改原数据，使用引用避免拷贝
    //! 尾部的const表示该成员函数不会修改结构体的任何成员变量
    bool operator() (const std::string& str1, const std::string& str2) const {
        //! 字符串拷贝
        std::string str1NoCase(str1), str2NoCase(str2);
        //! std::transform来自algorithm头文件，用于对容器中的元素执行转换操作
        //! 前两个参数指定源字符串的范围
        //! 第三个参数指定转换后结果的存放起始位置
        //! 第四个参数是转换函数，将字符转为小写，::表示调用全局命名空间中的tolower，避免与其他命名空间冲突
        std::transform(str1.begin(), str1.end(), str1NoCase.begin(), ::tolower);
        std::transform(str2.begin(), str2.end(), str2NoCase.begin(), ::tolower);
        //! 对转换为小写的字符串进行比较，返回bool结果
        return (str1NoCase < str2NoCase);
    }
};

typedef std::map<std::string, std::string> DIR_WITH_CASE;
typedef std::map<std::string, std::string, PredIgnoreCase> DIR_NOCASE;

int main() {
    //! 带大小写
    DIR_WITH_CASE dirWithCase;
    dirWithCase.insert(std::make_pair("John", "2345764"));
    dirWithCase.insert(std::make_pair("JOHN", "2345764"));
    dirWithCase.insert(std::make_pair("Sara", "42367236"));
    dirWithCase.insert(std::make_pair("Jack", "32435348"));

    std::cout << "Displaying contents of the case-sensitve map:\n";
    DisplayContents(dirWithCase);
    
    //! 不带大小写
    DIR_NOCASE dirNoCase(dirWithCase.begin(), dirWithCase.end());
    std::cout << "Displaying contents of the case-insensitive map: " << std::endl;

    DisplayContents(dirNoCase);

    //! 输入要查找指定键
    std::cout << "Please enter a name to search" << std::endl << "> ";
    std::string name;
    std::cin >> name;

    //! 在大小写敏感的map中查找
    auto pairWithCase = dirWithCase.find(name);
    if (pairWithCase != dirWithCase.end()) {
        std::cout << "Num in case-sens. dir: " << pairWithCase->second << std::endl;
    } else {
        std::cout << "Num not found in the case-insensitive directory" << std::endl;
    }

    auto pairNoCase = dirNoCase.find(name);
    if (pairNoCase != dirNoCase.end()) {
        std::cout << "Num found in CI dir: " << pairNoCase->second << std::endl;
    } else {
        std::cout << "Num not found in the case-insensitive directory" << std::endl;
    }

    return 0;
}