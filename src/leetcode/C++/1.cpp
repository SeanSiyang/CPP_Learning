/**
 * 说明：
 * 
 * 
 * 思路：
 *      第一种思路：暴力求解
 *          枚举在数组中所有的不同的两个下标的组合
 *          逐个检查它们所对应的数的和是否等于 target
 *          枚举的方法考虑了所有可能的情况
 *          需要注意i和j的起始位置，i肯定不会是最后一个元素，所以其遍历的位置是len - 1
 *          而 j 的起始位置肯定在i的后面，所以是i + 1
 *          
 * 
 *      第二种思路：查找表法（空间换时间）
 *          灵感：题目中要求找的两个数具有关系，两者和为target，如果i为答案，则另外一个数为 target - i
 * 
 *          主要目的：省去一层循环，降低时间复杂度
 *          
 *          在遍历的同时，记录一些信息，以省去一层循环，从而实现空间换时间
 *          因为找到合适的nums时，另外一个值肯定是 target - nums
 *          需要记录已经遍历过的数值和它所对应的下标，可以借助 查找表 实现
 *          查找表有两个常用的实现：
 *              - 哈希表
 *              - 平衡二叉搜索树
 *          因为不需要维护查找表中的顺序性，所以选择哈希表
 *          
 *          哈希表 map
 *          步骤：
 *              key存入数字，value存入其对应的索引
 *              遍历nums里的每个数字，将 target 减去这个值，将得到的值与表里的 key 进行对比
 *              如果这个数字不在表里，则将其存入key，并将其下标存入value
 *              后面的元素都如此操作
 *              当target减去当前遍历的值的结果在哈希表中，则当前值的索引，和在哈希表中的匹配值的索引就是结果
 * 
 *          官方建议在初始化哈希表时，尽量指定哈希表的容量，避免哈希表扩容所带来的性能消耗，可以考虑使用 len-1
 *          问题：为什么len-1？
 *          答案：第一个元素直接存入hash表，也因此从下标为1的元素开始遍历nums
 *          在添加之前，检查哈希表里是否存在这个元素
 *          
 *          
 * 示例数据：
 *  
 * 
 * 总结： 
 *      针对第一种暴力思路，计算出来索引以后，可以直接return了，不需要再用bool去判断了
 *      为了避免两个循环的索引一样，需要控制i和j，让它俩不重复
 *      int len = nums.size();
 *      // i 的第一个元素肯定不会是最后一个元素
 *      for (int i = 0; i < len - 1; i++) {         // i肯定不会是len-1，所以使用的是 <
 *          for (int j = i + 1; j < len; j++) {
 *              if (nums[i] + nums[j] == target) {
 *                  return {i, j};  // 直接返回结果，会直接赋值初始化
 *              }     
 *          }
 *      }
 *      return {};  // 直接调用了构造函数   因为题目要求一定有返回
 * 
 *      空间复杂度：
 *          使用了三个临时变量 len、i、j 
 *          所以空间复杂度是 O(1)
 *      时间复杂度：
 *          O(n^2) n为数组的长度
 * 
 *      针对第二种思路，因为时间复杂度大于空间复杂度时，考虑空间换时间
 *      在第一个元素之前是没有元素可以匹配的，所以对于第一个元素，应直接将值和对应的索引放入表中
 *      遍历的时候从下标为1的元素开始遍历。遍历到一个新元素之前，都检查当前hash表中是否有 target - nums[i]
 *      如果存在就直接返回下标了，返回的时候第一个值为下标，第二个值为从hash表中根据key找到对应的value，key是target - nums[i]，而value可以通过hash的函数获得
 *      如果不存在，则将当前值和对应的索引，存入hash表中。因为target - nums[i] 出现了两次，所以可以考虑使用一个变量来存储
 * 
 *      时间复杂度：
 *          O(n)，因为只遍历了数组一次
 *      空间复杂度：
 *          哈希表使用的容量与数组的长度线性相关，所以是 O(n)
 *      
 * 
 *      hashmap通常指的是标准库中的std::unordered_map，是一种基于哈希表实现的关联容器，用于存储键值对（key-value）
 *      哈希表的核心思想：通过一个哈希函数将键（key）映射到数组的特定索引位置，从而实现快速的插入、查找和删除操作
 *      即将任意大小的输入（key）转换为固定范围的输出（数组索引）
 *      哈希冲突：
 *          不同的键通过哈希函数可能得到相同的索引，需要特殊处理
 *      解决办法：
 *          链地址法（C++ unordered_map 采用的方式）：每个数组元素是一个链表 / 桶，相同索引的元素存放在同一个桶中
 *          开放地址法：冲突时寻找下一个空闲位置
 *      
 *      特点：
 *          存储键值对
 *          键是唯一的，不允许重复
 *          元素无序存储，std::map是有序的
 *          平均时间复杂度是O(1)的插入、查找和删除操作
 *             
 */

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>


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

    int len = nums.size();

    std::unordered_map<int, int> hashtable;
    // 将第一个元素值和对应的索引加入哈希表（其实可以不放）
    //hashtable.insert({nums[0], 0});

    // 从第二个元素开始遍历
    for (int i = 0; i < len; i++) {
        // 检查target - nums[i]的值是否在hash表中
        auto it = hashtable.find(target - nums[i]);
        if (it != hashtable.end()) {
            // return {it->second, i};
            idx1 = it->second;
            idx2 = i;
        }
        
        // 找不到
        hashtable[nums[i]] = i;
    }
    std::cout << idx1 << " " << idx2 << std::endl;
    
#if 0
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
#endif
// ===============================================================
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

    // std::cout << result[0] << " " << result[1] << "\n";

    return 0;
}