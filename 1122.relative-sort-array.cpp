/*
 * @lc app=leetcode id=1122 lang=cpp
 *
 * [1122] Relative Sort Array
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(const vector<int>& arr1,
            const vector<int>& arr2) {
        int arr2Length = arr2.size();
        int arr1Length = arr1.size();

        // n
        map<int, int> dict;
        for (int i = 0; i < arr2Length; i++) {
            int v2 = arr2[i];
            dict[v2] = 1;
        }

        // m
        vector<int> result1;
        for (int i = 0; i < arr1Length; i++) {
            int v1 = arr1[i];
            int count = dict[v1];
            if (count == 0)
                result1.push_back(v1);
            else
                dict[v1] = count + 1;
        }

        // m
        vector<int> result;
        for (int i = 0; i < arr2Length; i++) {
            int j = 1;
            int key = arr2[i];
            while (j++ < dict[key]) {
                result.push_back(key);
            }
        }

        sortReulst1(result1);
        result.insert(result.end(), result1.begin(), result1.end());

        return result;
    }

    vector<int> sortReulst1(vector<int>& result1) {
        //排序
        int len = result1.size();
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (result1[i] < result1[j]) {
                    int temp = result1[j];
                    result1[j] = result1[i];
                    result1[i] = temp;
                }
            }
        }
        return result1;
    }
};
// @lc code=end
