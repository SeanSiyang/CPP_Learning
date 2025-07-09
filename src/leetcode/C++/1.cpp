/**
 * 说明：
 * 
 * 
 * 思路：
 *      第一种思路：暴力求解
 *          枚举在数组中所有的不同的两个下标的组合
 *          逐个检查它们所对应的数的和是否等于 target
 *      枚举考虑了所有可能的情况
 * 
 *      第二种思路：查找表法（空间换时间）
 *          主要目的是省去一层循环
 *          在遍历的同时，记录一些信息，以省去一层循环
 *          因为找到合适的nums时，另外一个值肯定是 target - nums
 *          需要记录已经遍历过的数值和他它所对应的下标，可以借助查找表实现
 *          查找表有两个常用的实现：
 *              - 哈希表
 *              - 平衡二叉搜索树
 *          因为不需要维护查找表中的顺序性，所以选择哈希表
 *          哈希表 map
 *          
 * 
 * 
 * 示例数据：
 *  
 * 
 * 总结：
 *      计算出来索引以后，可以直接return了，不需要再用bool去判断了
 *      为了避免两个索引一样
 *      int len = nums.size();
 *      for (int i = 0; i < len - 1; i++) {
 *          for (int j = i + 1; j < len; j++) {
 *              if (nums[i] + nums[j] == target) {
 *                  return {i, j};
 *              }     
 *          }
 *      }
 *      return {};  // 直接调用了构造函数
 * 
 */

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        
        int idx1 = -1;
        int idx2 = -1;

        int len = nums.size();
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
                
            }
        }
        return {};

#if 0
        bool over = false;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (i == j) {
                    continue;
                }
                
                if (nums[i] + nums[j] == target) {
                    
                    idx1 = i;
                    idx2 = j;
                    std::cout << "idx1: " << idx1 << " idx2: " << idx2 << "\n";
                    over = true;
                }
            }
            if (over)
                break;
        }

        result.push_back(idx1);
        result.push_back(idx2);

        return result;
#endif
    }
};

int main() {
    std::vector<int> nums = { 1, 3, 4, 2 };
    int target = 6;
    int idx1 = -1;
    int idx2 = -1;

    std::vector<int> result;
    int len = nums.size();
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
            }
            
        }
    }

#if 0
    bool over = false;
    for (int i = 0; i < nums.size(); i++) {
        
        for (int j = 1; j < nums.size(); j++) {
            if (i == j) {
                continue;
            }
            if (nums[i] + nums[j] == target) {
                
                idx1 = i;
                idx2 = j;
                std::cout << "idx1: " << idx1 << " idx2: " << idx2 << "\n";
                over = true;
            }
        }
        if (over)
            break;
    }
#endif

    // std::cout << idx1 << " " << idx2 << std::endl;

    std::cout << result[0] << " " << result[1] << "\n";

    return 0;
}