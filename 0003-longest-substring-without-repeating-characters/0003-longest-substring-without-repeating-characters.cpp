class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, right = 0;
        int n = s.size();
        int maxLen = 0;

        while(right < n) {
            while(seen.count(s[right])) {
                seen.erase(s[left++]);
            }

            seen.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};