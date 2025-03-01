#include <iostream>
#include <vector>
#include <algorithm>    // max_element, min_element
#include <typeinfo>     // 查看类型

template <typename T>
std::pair<T, T> get_min_max(const std::vector<T>& vec) 
{
    if (vec.empty())
        throw std::invalid_argument("Vector is empty.\n"); // 表示函数接收到无效的参数

    auto max_it = std::max_element(vec.begin(), vec.end()); // 返回迭代器, 指向容器中最大元素的第一个出现位置
    auto min_it = std::min_element(vec.begin(), vec.end());
    
    // 输出类型
    std::cout << "Type of max_it: " << typeid(max_it).name() << "\n";

    return {*min_it, *max_it};
}

template <typename T>
double get_average(const std::vector<T>& vec) 
{
    if (vec.empty())
        throw std::invalid_argument("Vector is empty.\n");
    double sum = 0.0;
    for (const T& num : vec) {
        sum += num;
    }

    return sum / vec.size();
}


int main()
{
    try {
        std::vector<double> distances;
        double sum = 0.0;
        double average_dis = 0.0;
        double max_dis = 0.0, min_dis = 0.0;

        for (double dis; std::cin >> dis;) {
            if (dis < 0) {
                std::cerr << "[ERROR] - Invalid input...\n";
                continue;
            }
            distances.push_back(dis);
            sum += dis;
        }
        
        auto [min_val, max_val] = get_min_max(distances);
        double avg = get_average(distances);

        std::cout << "the sum of the distances is :" << sum << "\n";
    } catch (const std::invalid_argument& e) {
        std::cerr << "[ERROR] - " << e.what() << "\n";  // what返回具体的错误
    }
    
    return 0;
}