// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int res = target - nums[i];

            if (map.find(res) != map.end() && map[res] != i) {
                return {i, map[res]};
            }
            else {
                map[nums[i]] = i;
            }
        }

        return {};
    }
};
// @leet end
