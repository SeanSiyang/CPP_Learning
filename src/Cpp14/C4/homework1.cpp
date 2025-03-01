// #include "../../../include/std_lib_facilities.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>   // std::greater
#include "windows.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    std::vector<double> temps;
    for (double temp; std::cin >> temp;) // 输入类型不是double的话，循环会断掉
        temps.push_back(temp);

        // 均值
        double sum = 0;
        for (int x : temps) sum += x;
        std::cout << "Average temperature: " << sum / temps.size() << '\n';

        // 中值
        std::sort(temps.begin(), temps.end());

        double mid = 0.0;
        if (temps.size() % 2 == 0) {
            mid = (temps[temps.size() / 2] + temps[(temps.size() / 2) - 1]) / 2.0;
        } else {
            mid = temps[temps.size() / 2];
        }
        std::cout << "Median temperature: " << mid << '\n';

        // 默认升序
        std::cout << "升序：\n";
        for (int num : temps) std::cout << num << " ";
        std::cout << "\n";

        // 降序
        std::sort(temps.begin(), temps.end(), std::greater<int>());
        std::cout << "降序：\n";
        for (int num : temps) std::cout << num << " ";
        std::cout << "\n";

        // 按绝对值升序
        std::sort(temps.begin(), temps.end(), [](int a, int b) {
            return std::abs(a) < std::abs(b);
        });
        std::cout << "按绝对值升序：\n";
        for (int num : temps) std::cout << num << " ";
        

    return 0;
}