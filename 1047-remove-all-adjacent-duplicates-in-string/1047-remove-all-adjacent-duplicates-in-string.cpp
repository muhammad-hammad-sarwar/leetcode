class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans;

        for(char c: s) {
            if(st.empty() || st.top() != c) {
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