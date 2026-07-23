class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = -1;
        for(int i = 0; i < word.size(); i++)
            if(word[i] == ch) {
                idx = i;
                break;
            }

        if(idx == -1) return word;

        string ans = "";
        for(int i = idx; i >= 0; i--)
            ans.push_back(word[i]);

        for(int i = idx + 1; i < word.size(); i++) 
            ans.push_back(word[i]);

        return ans;
    }
};