/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
    Input: s = "anagram", t = "nagaram"
    Output: true

Example 2:
    Input: s = "rat", t = "car"
    Output: false

Constraints:
    1 <= s.length, t.length <= 5 * 104
    s and t consist of lowercase English letters.

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        string sc = s;
        string tc = t;
        sort(sc.begin(), sc.end());
        sort(tc.begin(), tc.end());
        return sc == tc;
    }
};

// Time:  O(n)
// Space: O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> count;
        for (int i = 0; i < s.size(); i++) {
            ++count[s[i]];
            --count[t[i]];
        }
        auto it = count.begin();
        while (it != count.end()) {
            if (it->second != 0) return false;
            ++it;
        }

        return true;
    }
};

// Time:  O(nlogn)
// Space: O(1)
class Solution2 {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};