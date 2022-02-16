class Solution {
public:
    int change(int k, vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int> (k+1,0));
        for(int i=0;i<=k;i++){
            if(i%nums[0] == 0)
                dp[0][i] = 1;
            else
                dp[0][i] = 0;
        }
        if(nums[0] <= k)
            dp[0][nums[0]] = 1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=k;j++){
                int no = dp[i-1][j];
                int take = 0;
                if(nums[i] <= j)
                    take = dp[i][j-nums[i]];
                dp[i][j] = no+take;
            }
        }
        return dp[n-1][k];
        
    }
};