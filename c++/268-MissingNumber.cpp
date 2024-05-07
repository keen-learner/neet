/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:
    Input: nums = [3,0,1]
    Output: 2
    Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:
    Input: nums = [0,1]
    Output: 2
    Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:
    Input: nums = [9,6,4,2,3,5,7,0,1]
    Output: 8
    Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.

Constraints:
    n == nums.length
    1 <= n <= 104
    0 <= nums[i] <= n
    All the numbers of nums are unique.

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?

*/

// Time:  O(n)
// Space: O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = 0;
        for (int i = 0; i < nums.size(); ++i) {
            num ^= nums[i] ^ (i + 1);
        }
        return num;
    }
};

// below is a variant of above
class Solution0 {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res = res ^ nums[i];
        }
        for (int i = 0; i < nums.size() + 1; i++) {
            res = res ^ i;
        }
        return res;
    }
};

class Solution1 {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long sum = (n * (n + 1)) / 2;
        for (int num : nums) {
            sum = sum - num;
        }
        return (int)sum;
    }
};

// Time:  O(n)
// Space: O(n)
class Solution2 {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> expected(nums.size());
        iota(expected.begin(), expected.end(), 1);  // Costs extra space O(n)
        return accumulate(nums.cbegin(), nums.cend(), 0, bit_xor<int>()) ^
            accumulate(expected.cbegin(), expected.cend(), 0, bit_xor<int>());
    }
};