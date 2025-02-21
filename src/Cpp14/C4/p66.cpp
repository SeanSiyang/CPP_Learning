// #include <vector>
// #include <iostream>

// int main() {
//     std::cout << "Hello";
//     std::vector<int> v(5);          // 5个0: {0,0,0,0,0}
//     std::vector<int> v1(3);         // 3个0: {0,0,0}
//     v1 = {1, 2, 3};         // 赋值后变为4个元素: {1,2,3,4}

//     // 输出v1元素（索引循环）
//     for (int i = 0; i < v1.size(); i++)
//         std::cout << v1[i] << " ";  // 修正：输出v1[i]
//     std::cout << std::endl;
//     return 0;
//     // // 输出v1元素（范围循环）
//     // for (int i : v1)
//     //     cout << i << " ";
//     // cout << endl;

//     // vector<int> v2 = {1, 2, 3}; // 直接初始化: {1,2,3}
//     // vector<int> v3(3);          // 3个0: {0,0,0}
//     // v3 = {1, 2};                // 赋值后变为2个元素: {1,2}

//     // // 输出v3元素（范围循环）
//     // for (int i : v3)
//     //     cout << i << " ";
//     // cout << endl;

//     // // 输出v3元素（索引循环）
//     // for (int i = 0; i < v3.size(); i++)
//     //     cout << v3[i] << " ";  // 修正：输出v3[i]
//     // cout << endl;

//     // return 0;
// }


// #include "../../../include/std_lib_facilities.h"
#include <vector>
#include <iostream>

int main()
{
    // vector<int> v(5) = {1, 2, 3, 4, 5}; // error
    std::vector<int> v(5);  // 五个默认值为 0 
    std::vector<int> v1(3); // 三个默认值为 0
    v1 = { 1, 2, 3, 4 };    // 如果给四个值
    for (int i = 0; i < v1.size(); i++)
        std::cout << v1[i] << " ";
    std::cout << "\n";
    for (int i: v1) 
        std::cout << i << " ";
    std::cout << "\n";

    std::vector<int> v2 = { 1, 2, 3 };
    std::vector<int> v3(3);
    v3 = { 1, 2 };  // 赋两个值
    for (int i: v3) 
        std::cout << i << " ";
    std::cout << "\n";

    for (int i = 0; i < v3.size(); i++)
        std::cout << i << " ";

    return 0;
}