class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt = 0;
        int n = s.size();
        for(int i = 0; i < n - 2; i++) {
            char first = s[i];
            char second = s[i + 1];
            char third = s[i + 2];

            if(first != second && first != third && second != third) {
                cnt++;
            }
        }

        return cnt;
    }
};