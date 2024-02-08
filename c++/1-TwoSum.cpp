/*

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                res.push_back(i);
                res.push_back(m[target - nums[i]]);
            }
            m[nums[i]] = i;
        }
        return res;
    }
};


// O(nlogn) sorting solution

class Solution1 {

public:

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> t(nums);
        sort(t.begin(), t.end());
        int i;
        int j;

        for (i = 0, j = nums.size() - 1; i < j; ) {
            if (t[i] + t[j] == target) break; // found pair
            else if (t[i] + t[j] < target) ++i;
            else --j;
        }

        // we know a pair exists, so i and j in t are that pair
        vector<int> res;

        for (auto k = 0; k < nums.size(); ++k) {
            if (nums[k] == t[i] || nums[k] == t[j]) res.push_back(k);
            if (res.size() == 2) break;
        }

        return res;
    }
};

// Time - O(n^2)
class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};