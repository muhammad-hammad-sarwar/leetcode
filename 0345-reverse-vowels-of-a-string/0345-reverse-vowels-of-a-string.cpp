class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U','a', 'e', 'i', 'o', 'u'};

        int left = 0, right = s.size() - 1;
        while(left < right) {
            if(!vowels.count(s[left])) {
                left++;
                continue;
            }

            if(vowels.count(s[right])) {
                swap(s[left++], s[right--]);
            } else {
                right--;
            }
        }

        return s;
    }
};