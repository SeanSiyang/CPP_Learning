/**
 * 说明：
 *      给你一个包含n个整数的数组nums，判断nums中是否存在三个元素a, b, c
 *      使得a + b + c = 0，请你找出所有满足条件且不重复的三元组。
 * 
 * 思路：
 *      题目难点：不包含重复解
 * 
 *      1.暴力解法
 *          时间复杂度：O(N^3)
 *          空间复杂度：O(1)
 *      
 *      排序的原因：需要对数组先进行排序，排序可以让相同的元素相邻，这样就可以判断是否存在重复元素，因为可以比对下一个位序的元素是否重复来判断
 * 
 *      外层循环遍历的范围是 0 到 len - 3
 *      中层循环遍历的范围是 i + 1 到 len - 2
 *      内层循环遍历的范围是 j + 1 到 len - 1
 * 
 *      如果 nums[i] > 0 直接结束循环了，因为已经排序过了，后面的元素肯定都是大于0的，所以不论怎么相加都是大于0的
 *      如果 nums[i] + nums[j] > 0，提前结束中层循环，因为第三个数是什么已经无所谓了，肯定超过 0 了
 *          
 *      2.双指针法
 *          关键字：不可以包含重复
 *          模式识别：利用排序避免重复答案
 *          降低复杂度变成 twoSum
 *          利用双指针找到所有解
 *      排序可以避免重复答案，按照一定顺序去寻找所有解
 *      如果所有三元数组都从小到大进行排序，可以先把整个数组进行排序
 *      从左向右寻找答案
 * 
 *      确定了第一个元素，寻找剩下的两个元素等价于leetcode 1的题目
 * 
 *      与题1的区别在于，题1中只有一个twoSum的解，而本题中有若干个twoSum的解
 *      
 *      在一个排序数组中，找到所有的两数之和，使得其和等于一个特殊值
 *      
 *      在使用双指针法时，如果和比目标值小，移动头指针，向后移动，使和变大；否则移动尾指针，向前移动，使和变小
 * 
 *      因为要求不重复，所以无法直接使用三重循环枚举所有的三元组
 * 
 * 
 *      
 * 
 * 示例数据：
 *      输入：nums = [-1, 0, 1, 2, -1, -4];
 *      输出：[[-1, -1, 2], [-1, 0, 1]]
 *           
 * 
 * 总结：
 *      
 * 
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& sums) {
        std::vector<std::vector<int>> result;


        return result;
    }
};

int main() {
    std::vector<int> nums = { -1, 0, 1, 2, -1, -4 };
    
    std::vector<std::vector<int>> result;

    int len = nums.size(); 

    std::sort(nums.begin(), nums.end());
    
    //! 暴力解法
    for (int i = 0; i < len - 2; i++) {
        if (nums[i] > 0) break;

        // 重复处理：跟前面的数值比较
        if (i > 0 && nums[i] == nums[i-1]) continue;
        
        for (int j = i + 1; j < len - 1; j++) {
            if (nums[i] + nums[j] > 0) break;
            // 重复处理
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            for (int k = j + 1; k < len; k++) {
                // 重复处理
                if (k > j + 1 && nums[k] == nums[k - 1]) continue;

                if (nums[i] + nums[j] + nums[k] == 0)
                    result.push_back({nums[i], nums[j], nums[k]});
            }
        }

    }

    // for (int i = 0; i < len; i++) {
    //     for (int j = 1; j < len - 1; j++) {
    //         for (int k = 2; k < len - 2; k++) {
    //             int sum = nums[i] + nums[j] + nums[k];
    //             if (sum == 0) {
    //                 if (i != j && i != k && j != k) {
    //                     std::vector<int> temp = { i, j, k };
    //                     // result.push_back(temp);
    //                     result.push_back(temp);
    //                 }
    //             }
    //         }
    //     }
    // }

    for (const auto& row : result) {
        for (const auto& element : row) {
            std::cout << element << "\n";
        }
        std::cout << std::endl;
    }


    return 0;
}