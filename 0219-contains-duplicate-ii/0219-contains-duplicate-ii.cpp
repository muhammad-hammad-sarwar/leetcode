class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        int left = 0, right = 0;
        int n = nums.size();

        while(right < n) {
            if(right - left <= k) {
                if(seen.count(nums[right])) return true;
                seen[nums[right]] = right;
                if(right - left == k) {
                    seen.erase(nums[left]);
                    left++;
                }
            }

            right++;
        }
        
        return false;
    }
};