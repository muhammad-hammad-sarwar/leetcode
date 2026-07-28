class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans;

        unordered_map<char, char> smallToCapital;
        unordered_map<char, char> capitalToSmall;

        for(char c = 'A', s = 'a'; c <= 'Z'; c++, s++) {
            capitalToSmall[c] = s;
            smallToCapital[s] = c;
        }

        for(char c: s) {
            if(st.empty() || (smallToCapital[c] != st.top() && capitalToSmall[c] != st.top())) {
                st.push(c);
                continue;
            }

            st.pop();
        }

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};