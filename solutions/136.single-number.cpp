// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;

        for (auto num : nums) {
            res = res ^ num;
        }

        return res;
    }
};
// @leet end
