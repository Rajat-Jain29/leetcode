class Solution {
public:
    int k = 0;
    int helper(vector<int> &nums ,vector<int> &dp, int target){
        if(dp[target] != -1)
            return dp[target];
        int res = 0;
        for(int i : nums){
            if( i <= target){
                res += helper(nums,dp,target - i);
            }
        }
        return dp[target] = res;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1 , -1);
        dp[0] = 1;
        helper(nums,dp,target);
        return dp[target];
    }
};