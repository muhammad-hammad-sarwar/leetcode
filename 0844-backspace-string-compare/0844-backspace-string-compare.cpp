class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ansS, ansT;
        for(char c: s) {
            if(c != '#') {
                ansS.push_back(c);
            } else if(!ansS.empty()) {
                ansS.pop_back();
            }
        }

        for(char c: t) {
            if(c != '#') {
                ansT.push_back(c);
            } else if(!ansT.empty()) {
                ansT.pop_back();
            }
        }

        return ansS == ansT;
    }
};