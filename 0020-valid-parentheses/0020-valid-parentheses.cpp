class Solution {
public:
    bool isValid(string s) {
        unordered_set<char> opening = {'(', '{', '['};
        unordered_set<char> closing = {')', '}', ']'};
        unordered_map<char, char> closeToOpen = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> st;

        for(char c: s) {
            if(opening.count(c)) {
                st.push(c);
                continue;
            }

            if(!st.empty() && st.top() == closeToOpen[c]) {
                st.pop();
                continue;
            }

            return false;
        }

        return st.empty();
    }
};