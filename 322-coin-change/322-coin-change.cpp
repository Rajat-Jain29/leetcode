class Solution {
public:
    int coinChange(vector<int>& nums, int k) {
       int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(k+1,0) );
        
        for(int i=0;i<=k;i++){
            if( i%nums[0] == 0  ){
                dp[0][i] = i/nums[0];
            }
            else
                dp[0][i] = 1e9;
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<=k;j++){
                int no = dp[i-1][j];
                int take = 1e9;
                if(nums[i] <= j)
                    take = 1 + dp[i][j-nums[i]];
                dp[i][j] = min(no,take);
            }
        }
        
        return dp[n-1][k] == 1e9 ? -1 : dp[n-1][k]; 
    }
};