/*
 * @lc app=leetcode id=1128 lang=cpp
 *
 * [1128] Number of Equivalent Domino Pairs
 */

// @lc code=start
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        // 调整顺序
        // !!!: 这个并不能调整顺序
        // for (auto d : dominoes) {
        //     if (d[0] > d[1]) {
        //         int temp = d[0];
        //         d[0] = d[1];
        //         d[1] = d[0];
        //     }
        // }
        for (int i=0; i < dominoes.size(); i++) {
            if (dominoes[i][0] > dominoes[i][1]) {
                int tmp = dominoes[i][0];
                dominoes[i][0] = dominoes[i][1];
                dominoes[i][1] = tmp;
            }
        }

        // 统计数量
        map<vector<int>, int> countDict;
        for (auto d : dominoes) {
            countDict[d] += 1;
        }

        // 计算组合数量 C(n, 2) = P(n, 2)/2!
        int result = 0;
        for (auto d : countDict) {
            int value = d.second;
            result += value * (value-1)/2;
        }
        return result;
    }
};
// @lc code=end
