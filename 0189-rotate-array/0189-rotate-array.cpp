class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int rotations = k % nums.size();
        if(k == 0) return;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + rotations);
        reverse(nums.begin() + rotations, nums.end());
    }
};