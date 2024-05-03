/*

Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:

    Input: n = 2
    Output: [0,1,1]
    Explanation:
    0 --> 0
    1 --> 1
    2 --> 10

Example 2:
    Input: n = 5
    Output: [0,1,1,2,1,2]
    Explanation:
    0 --> 0
    1 --> 1
    2 --> 10
    3 --> 11
    4 --> 100
    5 --> 101

Constraints:
    0 <= n <= 105

Follow up:
    It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
    Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?

*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        for (int i = 1; i <= n; i++) {
            res.push_back(countSetBits(i));
        }
        return res;
    }

    int countSetBits(int num) {
        int count = 0;
        while (num != 0) {
            num = num & (num - 1);
            count++;
        }
        return count;
    }
};

// Approch: use dynamic programming
class Solution1 {
public:

    vector<int> countBits(int num) {
        vector<int> dp(num + 1);
        dp[0] = 0;
        for (int i = 1; i <= num; i++) {
            dp[i] = dp[i / 2] + i % 2;
        }
        return dp;
    }
};