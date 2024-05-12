/*
Given a string s, find the length of the longest
substring without repeating characters.

Example 1:
    Input: s = "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.

Example 2:
    Input: s = "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.

Example 3:
    Input: s = "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.
    Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Constraints:
    0 <= s.length <= 5 * 104
    s consists of English letters, digits, symbols and spaces.

*/

// Time 0(n), Space O(d) d-char set size
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_map<char, int> m;
        const int n = s.size();
        int i = 0;
        for (int j = 0; j < n; j++) {
            auto it = m.find(s[j]);
            if (it != m.end() && (m[s[j]] >= i)) { //char found              
                res = max(res, j - 1 - i + 1);
                i = it->second + 1;

            }
            m[s[j]] = j;
        }
        return max(res, n - 1 - i + 1);
    }
};

class Solution0 {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_set<char> stt;
        int len = 0;
        while (right != s.size()) {
            char temp = s[right];
            char temp2 = s[left];
            if (stt.find(temp) == stt.end()) {
                stt.insert(temp);
                right++;
            }
            else {
                stt.erase(temp2);
                left++;
            }
            len = max(len, right - left);
        }
        return len;
    }
};

// Time 0(n), Space O(d) d-char set size
class Solution1 {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        if (s.size() == 0) return res;
        unordered_map<char, int> m;
        int begin = 0;
        int end = 0;
        int counter = 0; //tracks duplicates
        while (end < s.size()) {
            ++m[s[end]];
            if (m[s[end]] > 1) ++counter;

            while (counter > 0) {
                if (m[s[begin]] > 1) --counter;
                --m[s[begin]];
                ++begin;
            }
            res = max(res, end - begin + 1);
            ++end;
        }
        return res;
    }
};

// O(n3) brute force
class Solution2 {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        set<char> h;
        const auto n = s.size();
        for (int size = 1; size <= n; size++) { // length i substring
            for (int i = 0; i <= n - size; i++) {
                h.clear();
                for (int j = i; j - i + 1 <= size; j++) {
                    h.insert(s[j]);
                }
                if (h.size() == size) res = max(res, size);
            }
        }
        return res;
    }
};