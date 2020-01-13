/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // max1 > max2 > max3
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;

        // min1 < min2
        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (int a : nums) {
            if (a > max1) {
                max3 = max2;
                max2 = max1;
                max1 = a;
            } else if (a > max2) {
                max3 = max2;
                max2 = a;
            } else if (a > max3) {
                max3 = a;
            }

            if (a < min1) {
                min2 = min1;
                min1 = a;
            } else if (a < min2) {
                min2 = a;
            }
        }

        return max(min1 * min2 * max1, max1 * max2 * max3);
    }
};
// @lc code=end
