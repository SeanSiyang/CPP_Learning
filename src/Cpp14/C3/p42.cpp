#include <iostream>

int main()
{
    double d = 0;
    while (std::cin >> d)
    {
        int i = d;  // 发生小数点截断
        char c = i; // 窄化，容易丢失信息
        int i2 = c; // 获取字符的整数值
        std::cout << "d == " << d
                  << " i == " << i
                  << " i2 == " << i2
                  << " char(" << c << ")\n";
    }

    return 0;
}