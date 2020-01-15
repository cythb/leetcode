/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size() == 0) 
            return 0;

        int low = 0;
        int hight = nums.size()-1;
        while (low <= hight) {
            int m = low + (hight - low)/2;
            cout<<m<<endl;
            if (nums[m] == target) {
               return m;
            } else if (nums[m] > target) {
                hight = m - 1;
            } else if (nums[m] < target) {
                low = m + 1;
            }
            cout<<"h"<<hight <<"l"<<low<<endl;
        }
        return low;
    }
};
// @lc code=end
