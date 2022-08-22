class Solution {
public:
    bool solve(vector<int>& nums,int s,int n){
        vector<vector<bool>> dp(n,vector<bool>(s+1,false));
        for(int i=0;i<n;i++){
            dp[i][0] = true;
        }
        if(s == nums[0])
            dp[0][nums[0]] = true;
        
        for(int i=1;i<n;i++){
            for(int j=1;j<=s;j++){
                int no = dp[i-1][j];
                int take = false;
                if(nums[i] <= j)
                    take = dp[i-1][j-nums[i]];
                dp[i][j] = no || take;
            }
        }
        return dp[n-1][s];
    }
    bool canPartition(vector<int>& nums) {
        int s = 0;
        for(int i : nums)
            s += i;
        
        if( s%2 != 0)
            return false;
        return solve(nums,s/2,nums.size());
    }
};