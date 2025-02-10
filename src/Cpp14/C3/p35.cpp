#include "../../../include/std_lib_facilities.h"

int main() 
{
    string previous = " ";  // 该字符串包含一个空格
    string current;
    while (std::cin >> current) {
        if (previous == current) 
            std::cout << "repeated word: " << current << '\n';
        else
            std::cout << "previous is not same as current." << '\n';
        previous = current;
    }
    return 0;
}

