/*

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

    Input: nums = [1,2,3,4]
    Output: [24,12,8,6]

Example 2:
    Input: nums = [-1,1,0,-3,3]
    Output: [0,0,9,0,0]

Constraints:
    2 <= nums.length <= 105
    -30 <= nums[i] <= 30
    The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prev = 1;
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++) {
            res.push_back(prev);
            prev = prev * nums[i];
        }
        prev = 1;
        for (int i = n - 1; i >= 0; --i) {
            res[i] = prev * res[i];
            prev = prev * nums[i];
        }
        return res;
    }
};

class Solution0 {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prev = 1;
        int n = nums.size();
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = prev;
            prev = prev * nums[i];
        }
        prev = 1;
        for (int i = n - 1; i >= 0; --i) {
            res[i] = prev * res[i];
            prev = prev * nums[i];
        }
        return res;
    }
};

class Solution1 {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[0] = 1;
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }
        int prod = 1;
        for (int i = n - 2; i >= 0; i--) {
            prod = prod * nums[i + 1];
            res[i] = res[i] * prod;
        }
        return res;
    }
};

class Solution2 {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zc = 0;
        vector<int> res;
        int prod = 1;
        for (auto it : nums) {
            if (it == 0) {
                zc++;
            }
            else {
                prod = it * prod;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (zc == 1) {
                if (nums[i] == 0) {
                    res.push_back(prod);
                }
                else {
                    res.push_back(0);
                }
            }
            else if (zc > 1) {
                res.push_back(0);
            }
            else {
                res.push_back(prod / nums[i]);
            }
        }
        return res;
    }
};