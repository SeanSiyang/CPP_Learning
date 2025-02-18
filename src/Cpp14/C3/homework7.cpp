#include "../../../include/std_lib_facilities.h"

int main()
{
    std::string str1 = " ", str2 = " ", str3 = " ";

    std::cout << "Please enter three strs: \n";

    std::cin >> str1 >> str2 >> str3;

    if (str1 > str2) {
        std::string temp = str1;
        str1 = str2;
        str2 = temp;
    } 
    
    if (str1 > str3) {
        std::string temp = str1;
        str1 = str3;
        str3 = temp;
    } 
    
    if (str2 > str3) {
        std::string temp = str2;
        str2 = str3;
        str3 = temp;
    }

    std::cout << str1 << ", " << str2 << ", " << str3 << "\n";

    return 0;
}