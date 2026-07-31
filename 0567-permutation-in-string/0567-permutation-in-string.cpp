class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> counts1;
        unordered_map<char, int> counts2;

        for(char c: s1)
            counts1[c]++;

        int left = 0, right = 0;
        int n = s2.size();

        while(right < n) {
            counts2[s2[right]]++;
            if((right - left + 1) == s1.size()) {
                if(counts1 == counts2) return true;
                char toDel = s2[left];
                counts2[toDel]--;
                if(counts2[toDel] == 0) counts2.erase(toDel);
                left++;
            }

            right++;
        }

        return false;
    }
};