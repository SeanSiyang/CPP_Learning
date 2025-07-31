当时间复杂度高于空间复杂度时，比如时间复杂度为$O(n^2)$，空间复杂度为$O(1)$，此时可以考虑用空间换时间

# 散列表的查找步骤

主要分为两步

- 第一步是在存储时，通过散列函数计算记录的散列地址，并按此散列地址存储该记录。不管什么记录，都用同一个散列函数计算出地址再存储。
- 第二步是在查找记录时，通过同样的散列函数计算记录的散列地址，按此散列地址访问该记录。

散列技术既是一种存储方式，也是一种查找方法。散列技术的记录之间没有逻辑关系，每个记录只与关键字有关联。散列表主要是面向查找的存储结构。

散列技术最适合求解查找与给定值相等的记录，简化了比较过程，效率有较大提升，但是散列技术不具备很多常规数据结构的能力，无法进行范围查找，也无法找到最大值、最小值。

# 散列表的冲突

理想情况下，每一个关键字通过散列函数计算出来的地址是不一样的。冲突的现象是指两个关键字虽然不一样$key_1 \neq key_2$，但是$f(key_1)=f(key_2)$，这种现象称为冲突，且$key_1$和$key_2$称为这个散列函数的同义词。

# 散列函数的构造方法

散列函数的设计原则：

计算简单：散列函数的计算时间不应超过其他查找技术与关键字比较的时间。

散列地址分布均匀：尽量让散列地址均匀地分布在存储空间中，可以保证存储

# STL 映射类

主要容器有 `map`、`multimap`、`unordered_map`、`unordered_multimap`

主要功能：插入、删除和查找，可以提供自定义的排序谓词

`map`和`multimap`是键值对容器

`map`和`multimap`的主要区别：`map`只能存储唯一的键，而`multimap`能存储重复的键

在`map`和`multimap`中插入元素将进行排序，无法使用其他元素替换给定位置的元素，即位于`map`中特定位置的元素不能替换为值不同的新元素，因为`map`将新元素同二叉树中的其他元素进行比较，从而将其放在其他位置。

## map和multimap

要使用`map`和`multimap`，需要包含头文件：

```c++
#include <map>
```

`map`和`multimap`都属于模板类，要使用其成员函数，需要实例化。

```c++
#include <map>
using namespace std;

// map<keyType, valueType, Predicate=std::less<keyType>> mapObj;
// multimap<keyType, valueType, Predicate=std::less<keyType>> mmapObj;

std::map<int, std::string> mapIntToStr;
std::multimap<int, std::string> mmapIntToStr;
```

默认排序标准是`std::less<T>`，也就是按升序排列，可以提供一个谓词，实现自定义排序标准，谓词可以是实现了`operator()`的类或结构体

### 插入元素

使用成员函数`insert`插入元素，`map`和`multimap`包含的元素都是键值对，所以插入的时候可以使用`std::pair`来指定要插入的键和值

```c++
mapIntToStr.insert(std::pair<int, std::string>(1000, "One Thousand"));
```

还可以使用数组下标运算符来插入元素：

```c++
mapIntToStr[10000] = "Ten Thousands";
```

使用`map`来实例化`multimap`：

```c++
std::multimap<int, std::string> mmapIntToStr(mapIntToStr.cbegin(), mapIntToStr.cend());
```

完整代码：
```c++
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
```

### 查找元素

可以利用成员函数`find`根据给定的键查找值，该函数总是返回一个迭代器

使用`find`返回的迭代器之前，需要检查迭代器以核实`find`操作成功了，如果没有找到，就会等于`map.end()`

```c++
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
```

如果是multimap，容器中可能存在多个键相同的键值对，可以使用`multimap::count()`确定有多少个值与指定的键对应，再对迭代器递增，以访问这些相邻的值。

```c++
auto pairFound = mmapIntToStr.find(key);

//! Check if find() succeeded
if (pairFound != mmapIntToStr.end()) {
    //! Find the number of pairs that have the same supplied key
    size_t numPairsInMap = mmapIntToStr.count(key);
    for (size_t counter = 0;
        counter < numPairsInMap;
        ++counter) {
            std::cout << "Key: " << pairFound->first;
            std::cout << ", Value [" << counter << "] = ";
            std::cout << pairFound->second << std::endl;
            ++pairFound;
        }
} else {
    std::cout << "Element not found in the multimap.\n";
}
```

### 删除元素

使用成员函数`erase`，该函数删除容器中的元素。调用erase函数时将键作为参数，将删除包含指定键的所有键值对

erase函数也接受迭代器作为参数，以删除迭代器指向的元素。也可以使用迭代器指定边界，将指定范围内的所有元素都从map和multimap中删除

```c++
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
```

## 提供自定义的排序谓词

`map`和`multimap`的第三个参数决定排序规则，默认为`std::less<>`提供的默认排序标准，升序排列，且区分大小写

> 如果执行插入和搜索操作时不区分大小写，需要单独准备一个排序谓词

提供不同的排序标准，编写一个二元谓词即可，即实现了operator()的类或结构体

```c++
template<typename keyType>
struct Predicate
{
    bool operator() (const keyType& key1, const keyType& key2) {
        //! sort priority logic
    }
};
```

完整代码，以电话簿应用程序为例：

```c++
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
```

## unordered_map和unordered_multimap

C++11开始，STL支持散列映射：`std::unordered_map`类

需要包含头文件：

```c++
#include <unordered_map>
```

unordered_map的平均插入和删除时间是固定的，查找元素都时间也是固定的

散列表可以视为一个键值对集合，根据给定的键，可找到相应的值

相对于简单映射，散列表将键值对存储在桶中，每个桶都有索引，指出了它在散列表中的相对位置（类似数组）

索引可以通过散列函数根据键计算得到

```bash
Index = HashFunction(key, TableSize)
```

使用find函数根据键查找元素时，将使用HashFunction计算元素的位置，并返回该位置的值。

如果HashFunction设计不佳，将导致多个元素的索引相同，进而存储在同一个桶中，这样桶就变成了元素列表，这种情况就是之前描述过的冲突

冲突会降低查找速度，使查找时间不再是固定的。



