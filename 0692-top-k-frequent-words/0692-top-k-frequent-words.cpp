class Solution {
public:
    struct cmp {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return b.first > a.first;
            }

            return a.second > b.second;
        }
    }; // true = a is worse, false = a is better

    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string, int> counts;
        for(string s: words) counts[s]++;
        priority_queue<
            pair<int, string>,
            vector<pair<int, string>>,
            cmp
        > pq;

        for(auto& cnt: counts) pq.push({cnt.second, cnt.first});
        for(int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

/* 
a.first = "a"
b.first = "b"

"a" > "b" ? false because a comes before b. REQUIRED BEHAVIOUR
we have to return false when a is a better option
a.first > b.first
*/