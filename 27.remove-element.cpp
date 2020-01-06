/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    // 如果删除的数字出现在前面，需要赋值很多次；i，j最多遍历2n
    // int removeElement(vector<int>& nums, int val) {
    //     int i = 0;
    //     for (int j = 0; j < nums.size(); j++) {
    //         if (nums[j] != val) {
    //             nums[i] = nums[j];
    //             i++;
    //         }
    //     }
    //     return i;
    // }

    // i，j最多遍历n
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();
        while(i < n) {
            if (nums[i] == val) {
                nums[i] = nums[n-1];
                n = n - 1;
            } else {
                i++;
            }
        }
        return i;
    }
};
// @lc code=end
