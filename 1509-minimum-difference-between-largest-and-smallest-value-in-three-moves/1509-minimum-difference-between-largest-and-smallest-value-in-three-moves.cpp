class Solution {
public:
    int minDifference(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        if(len <= 4)
            return 0;
       
        
       int value = (nums[len - 4] - nums[0]);
        int v2 = (nums[len-3] - nums[1]);
        int v3 = (nums[len-2] - nums[2]);
        int v4 = (nums[len-1] - nums[3]);
        return min({value,v2,v3,v4});
    }
};