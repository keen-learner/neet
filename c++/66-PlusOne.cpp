/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Example 1:
    Input: digits = [1,2,3]
    Output: [1,2,4]
    Explanation: The array represents the integer 123.
    Incrementing by one gives 123 + 1 = 124.
    Thus, the result should be [1,2,4].

Example 2:
    Input: digits = [4,3,2,1]
    Output: [4,3,2,2]
    Explanation: The array represents the integer 4321.
    Incrementing by one gives 4321 + 1 = 4322.
    Thus, the result should be [4,3,2,2].

Example 3:
    Input: digits = [9]
    Output: [1,0]
    Explanation: The array represents the integer 9.
    Incrementing by one gives 9 + 1 = 10.
    Thus, the result should be [1,0].

Constraints:
    1 <= digits.length <= 100
    0 <= digits[i] <= 9
    digits does not contain any leading 0's.

*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // vector<int> res;
        int c = 1;
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            int num = digits[i] + c;
            if (num > 9) {
                c = 1;
                digits[i] = 0;
            }
            else {
                digits[i] = num;
                c = 0;
            }
        }
        if (c == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

class Solution0 {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry == 1) digits.insert(digits.begin(), carry);
        return digits;
    }
};

class Solution1 {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result(digits.cbegin(), digits.cend());
        int carry = 1;
        for (auto it = result.rbegin(); it != result.rend(); ++it) {
            *it += carry;
            carry = *it / 10;
            *it %= 10;
        }
        if (carry == 1) {
            result.emplace(result.begin(), carry);
        }
        return result;
    }
};

class Solution2 {
public:
    vector<int> plusOne(vector<int>& digits) {
        //vector<int> result(digits.cbegin(), digits.cend());
        int carry = 1;
        for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
            *it += carry;
            carry = *it / 10;
            *it %= 10;
        }
        if (carry == 1) {
            digits.emplace(digits.begin(), carry);
        }
        return digits;
    }
};