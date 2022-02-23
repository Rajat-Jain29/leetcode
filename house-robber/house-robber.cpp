class Solution {
public:
    int rob(vector<int>& nums) {
        int dp[101];
        if(nums.size() == 1)
            return nums[0];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            int no = dp[i-1];
            int take = dp[i-2]+nums[i];
            dp[i] = max(no,take);
        }
        return dp[nums.size()-1];
    }
};