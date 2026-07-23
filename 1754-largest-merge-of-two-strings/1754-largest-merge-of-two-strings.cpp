class Solution {
public:
    string largestMerge(string word1, string word2) {
        string merge = "";
        int w1 = 0, w2 = 0;
        while(w1 < word1.size() && w2 < word2.size()) {
            int len1 = (word1.size() - w1);
            int len2 =  (word2.size() - w2);

            cout << len1 << " " << len2 << endl;
            if(word1[w1] > word2[w2]) {
                merge.push_back(word1[w1++]);
            } else if(word1[w1] < word2[w2]) {
                merge.push_back(word2[w2++]);
            } else if(word1.substr(w1) > word2.substr(w2)) {
                merge.push_back(word1[w1++]);
            } else merge.push_back(word2[w2++]);
        }

        while(w1 < word1.size()) {
            merge.push_back(word1[w1++]);
        }

        while(w2 < word2.size()) {
            merge.push_back(word2[w2++]);
        }

        return merge;
    }
};