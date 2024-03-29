class Solution {
public:
   
    int solve(vector<int>& nums,int ind,int prev,vector<vector<int>> &dp){
        if(ind == nums.size())
            return 0;
        if(dp[ind][prev+1] != -1)
            return dp[ind][prev+1];
        int len = 0 + solve(nums,ind+1,prev,dp);
        if(prev == -1 || nums[ind] > nums[prev])
            len = max(len , 1 + solve(nums,ind+1,ind,dp));
        return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(nums,0,-1,dp);
    }
};