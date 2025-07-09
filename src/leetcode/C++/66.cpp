/**
 * 说明：
 *      carry 表示 进位（Carry-over）
 * 
 * 思路：
 *      1. 数字加法从最后一位开始，需要从数组末尾开始向前遍历
 *      2. 如果数字不为 9，则直接加1，进位为0
 *      3. 如果当前位数字为 9，则将其变为 0，并为下一位加 1
 *      4. 如果遍历完，进位依然是1，则在数组第 0 位插入 1
 * 
 * 示例数据：
 * 4321 -> 4322
 * 999 -> 1000
 * 
 * 总结：
 *  进位处理思想，如果遇到9就进1，不是9就不用进1
 *  输出的时候错将i用成了索引，耽误了时间
 *  还学到了获取数字位数的方式，就是转换为字符串，获取字符串长度，to_string和length
 * 
 */
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int length = digits.size();

        for (int i = length - 1; i >= 0; i--) {
            if (carry == 0) {
                break;
            }
            
            if (carry == 1) {
                if (digits[i] == 9) {
                    digits[i] = 0;
                    carry = 1;
                    // std::cout << "digits[i]" << digits[i] << std::endl;
                } else if (digits[i] < 9) {
                    digits[i] += 1;
                    carry = 0;
                    // std::cout << "digits[i]" << digits[i] << std::endl;
                }
            } else if (carry == 0) {
                continue;
            }
        }
        if (carry == 1) {
            digits.emplace(digits.begin(), 1);
        }
        return digits;
    }
};

int main() {
    Solution sol;

    std::vector<int> input1 = {7, 8, 9};
    std::vector<int> input2 = {9, 9, 9};
    std::vector<int> input3 = {1, 2, 3};
    std::vector<int> input4 = {7, 2, 8, 5, 0, 9, 1, 2, 9, 5, 3, 6,  
        6, 7, 3, 2, 8, 4, 3, 7, 9, 5, 7, 7, 4, 7, 4, 9, 4, 
        7, 0, 1, 1, 1, 7, 4, 0, 0, 6};

    //! lambda 函数
    auto test = [&](const vector<int>& input) {
        vector<int> digits = input;
        vector<int> result = sol.plusOne(digits);

        std::cout << "input: ";
        for (int digit : input) {
            std::cout << digit;
        }
        
        std::cout << "\noutput: ";
        for (int digit : result) {
            std::cout << digit;
        }
        std::cout << "\n\n";
    };

    test(input1);
    test(input2);
    test(input3);
    test(input4);

    return 0;
};


int main_1() {
    std::vector<int> input = { 7, 8, 9 };

    int carry = 1;
    int length = input.size();

    for (int i = length - 1; i >= 0; i--) {
        std::cout << input[i] << "\n";
        
        std::cout << "carry: " << carry << "\n";

        if (carry == 1) {
            if (input[i] == 9) {
                input[i] = 0;
                carry = 1;
                std::cout << "input[i]" << input[i] << std::endl;
            } else if (input[i] < 9) {
                input[i] += 1;
                carry = 0;
                std::cout << "input[i]" << input[i] << std::endl;
            }
        } else if (carry == 0) {
            continue;
        }
        //! 先对个位进行处理
        // if (i == length - 1) {
        //     if (input[i] == 9) {
        //         input[i] = 0;
        //         carry = 1;
        //         continue;
        //     } else {
        //         input[i] += 1;
        //         carry = 0;
        //         continue;
        //     }
        // }

        // if (carry == 1) {
        //     if (input[i] != 9) {
        //         input[i] += 1;
        //         carry = 0;
        //         std::cout << " --- " << input[i] << "\n";
        //     } else if (input[i] == 9) {
        //         input[i] = 0;
        //         carry = 1;
        //         std::cout << " === " << input[i] << "\n";
        //     }
        // } else {
        //     continue;
        // }
        
        // if (input[i] != 9) {
        //     //! 不为 9
        //     input[i] += 1;
        //     carry = 0;
        // } else {
        //     //! 为 9
        //     input[i] = 0;
        //     carry = 1;
        // }
    }

    std::cout << "carry: " << carry << "\n";
    
    if (carry == 1) {
        input.emplace(input.begin(), 1);
    }


    //! 原始代码写成了 std::cout << input[i] << "\n";
    //! i已经是原变量了
    for (auto i : input) {
        std::cout << i << "\n";
    }

    // std::cout << "结果: ";
    // for (auto digit : input) {
    //     std::cout << digit << " ";
    // }
    // std::cout << std::endl;

    return 0;
}


// int main_old() {
//     vector<long long> input = {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6}; 
//     // std::cout << input.size() << std::endl;
//     int length = input.size();  // 3

//     long long num = 0;

//     for (int i = 0; i < length; i++) {
//         // std::cout << input[i] << std::endl;
//         // std::cout << i << std::endl;

//         if (i != length - 1) {
//             // int times = pow(10, length - i - 1);
//             long long times = static_cast<long long>(round(pow(10, length - i - 1)));
//             // std::cout << "times: " << times << "\n";
//             num += input[i] * times;
//             // std::cout << num << "\n";

//         } else {
//             num += input[i];
//             // std::cout << num << "\n";
//         }
//     }
//     long long result_num = num + 1;
//     // std::cout << num + 1 << std::endl;

//     //! 把处理好的数据存回去，需要判断这个数字的长度
//     //! 转为字符串进行判断
//     std::string num_str = std::to_string(num + 1);
//     int digit_num = num_str.length();

//     std::vector<long long> result;

//     //! 把每一位存入数组
//     for (int i = 0; i < digit_num; i++) {
//         int digit = result_num % 10;
//         // std::cout << digit << "\n";
//         result_num /= 10;

//         // result.push_back(digit);
//         result.emplace(result.begin(), digit);
//     }

//     for (auto i : result) {
//         std::cout << i;
//     }
//     return 0;
// }