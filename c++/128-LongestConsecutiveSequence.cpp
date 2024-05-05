/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

Example 1:
    Input: nums = [100,4,200,1,3,2]
    Output: 4
    Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:
    Input: nums = [0,3,7,2,5,8,4,6,0,1]
    Output: 9

Constraints:
    0 <= nums.length <= 105
    -109 <= nums[i] <= 109
*/

/*
consider cases when there's duplicates: [1,2,0,1]
for solution with set, its O(n) because we look at all sequences, which can be atmost n or 1.
*/

// Time and Space: O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return n;
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 1;

        for (int i = 0; i < n; i++) {
            if (s.find(nums[i] - 1) == s.end()) { // we have new sequence
                int num = nums[i] + 1;
                int curr = 1;
                while (s.find(num) != s.end()) {
                    ++num;
                    ++curr;
                }
                res = max(curr, res);
            }
        }
        return res;
    }
};

// Time: O(nlogn)
class Solution0 {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 1;
        int curr = 1;
        int n = nums.size();
        if (n <= 1) return n;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == 1 + nums[i - 1]) {
                ++curr;
            }
            else if (nums[i] == nums[i - 1]) continue;
            else {
                res = max(curr, res);
                curr = 1;
            }
        }
        return max(res, curr);
    }
};
