/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:
    Input: nums = [-1,0,1,2,-1,-4]
    Output: [[-1,-1,2],[-1,0,1]]
    Explanation:
    nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
    nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
    nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
    The distinct triplets are [-1,0,1] and [-1,-1,2].
    Notice that the order of the output and the order of the triplets does not matter.

Example 2:
    Input: nums = [0,1,1]
    Output: []
    Explanation: The only possible triplet does not sum up to 0.

Example 3:
    Input: nums = [0,0,0]
    Output: [[0,0,0]]
    Explanation: The only possible triplet sums up to 0.

Constraints:
    3 <= nums.length <= 3000
    -105 <= nums[i] <= 105
*/

class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;
        const int target = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < static_cast<int>(nums.size()) - 2; ++i) {
            if (i == 0 || nums[i] != nums[i - 1]) {  // Skip duplicate.
                for (int j = i + 1, k = nums.size() - 1; j < k; ) {  // Time: O(n) for each i.
                    if (j > i + 1 && nums[j] == nums[j - 1]) {  // Skip duplicate.
                        ++j;
                    }
                    else if (k + 1 < nums.size() && nums[k] == nums[k + 1]) {  // Skip duplicate.
                        --k;
                    }
                    else {
                        const auto sum = nums[i] + nums[j] + nums[k];
                        if (sum > target) {  // Should decrease sum.
                            --k;
                        }
                        else if (sum < target) {  // Should increase sum.
                            ++j;
                        }
                        else {
                            res.push_back({ nums[i], nums[j], nums[k] });
                            ++j, --k;
                        }
                    }
                }
            }
        }
        return res;
    }
};




class Solution1 {

public:

    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;
        const int target = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < static_cast<int>(nums.size()) - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicate.
            for (int j = i + 1, k = nums.size() - 1; j < k; ) {  // Time: O(n) for each i.
                if (j > i + 1 && nums[j] == nums[j - 1]) {  // Skip duplicate.
                    ++j;
                }
                else if (k < nums.size() - 1 && nums[k] == nums[k + 1]) {  // Skip duplicate.
                    --k;
                }
                else {
                    const auto sum = nums[i] + nums[j] + nums[k];
                    if (sum > target) {  // Should decrease sum.
                        --k;
                    }
                    else if (sum < target) {  // Should increase sum.
                        ++j;
                    }
                    else {
                        res.push_back({ nums[i], nums[j], nums[k] });
                        ++j, --k;
                    }
                }
            }
        }
        return res;
    }
};

class Solution2 {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && (nums[i] == nums[i - 1])) continue;
            for (int j = i + 1; j < nums.size(); ++j) {
                if (j > i + 1 && (nums[j] == nums[j - 1])) continue;
                for (int k = j + 1; k < nums.size(); k++) {
                    if (k > j + 1 && (nums[k] == nums[k - 1])) continue;
                    if (nums[i] + nums[j] + nums[k] == 0) res.push_back({ nums[i], nums[j], nums[k] });
                }
            }
        }

        return res;
    }
};