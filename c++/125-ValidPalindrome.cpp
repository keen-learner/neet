/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
    Input: s = "A man, a plan, a canal: Panama"
    Output: true
    Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
    Input: s = "race a car"
    Output: false
    Explanation: "raceacar" is not a palindrome.

Example 3:
    Input: s = " "
    Output: true
    Explanation: s is an empty string "" after removing non-alphanumeric characters.
    Since an empty string reads the same forward and backward, it is a palindrome.

Constraints:
    1 <= s.length <= 2 * 105
    s consists only of printable ASCII characters.
*/

// Time:  O(n)
// Space: O(1)
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (!isalnum(s[i])) i++;
            else if (!isalnum(s[j])) --j;
            else {
                if (tolower(s[i]) != tolower(s[j])) return false;
                else {
                    i++;
                    --j;
                }
            }
        }
        return true;
    }
};

// Time:  O(n)
// Space: O(1)
// Iterator solution.
class Solution2 {
public:
    bool isPalindrome(string s) {
        auto left = s.begin();
        auto right = prev(s.end());
        //auto right = s.end(); --right;
        while (left < right) {
            if (!isalnum(*left)) {
                ++left;
            }
            else if (!isalnum(*right)) {
                --right;
            }
            else if (tolower(*left) != tolower(*right)) {
                return false;
            }
            else {
                ++left, --right;
            }
        }
        return true;
    }
};
