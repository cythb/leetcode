#include<map>

class Solution {
public:
    int findSpecialInteger(const vector<int>& arr) {
        int length = arr.size();
        float max = length * 0.25;
        // 未充分利用non-decreasing这个条件，如果利用这个条件的话，
        // 可以不使用map来保存状态，而只需要一个int来保存
        map<int, int> dict;
        for ( int i = 0; i < length; i++ ) {
            int key = arr[i];
            int count = dict[key];
            cout << count << endl;
            if (++count > max) {
               return key;
            } else {
               dict[key] = count;
            }
        }
        return 0;
    }
};
