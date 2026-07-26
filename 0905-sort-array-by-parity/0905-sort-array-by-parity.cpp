class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int odd = 0, even = 1;
        while(odd < nums.size() && even < nums.size()) {
            if(nums[odd] % 2 == 0) {
                odd++, even++;
                continue;
            }

            if(nums[even] % 2 != 0) {
                even++;
                continue;
            }

            swap(nums[odd++], nums[even++]);
        }

        return nums;
    }
};