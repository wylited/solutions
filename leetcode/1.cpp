#include <bits/stdc++.h>
using namespace std;

// two-sum
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
      if (hash.find(target - nums[i]) != hash.end())
        return {hash[target - nums[i]], i};
      hash[nums[i]] = i;
    }
    return {};
  }
};
