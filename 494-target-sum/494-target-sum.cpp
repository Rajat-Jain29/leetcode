class Solution {
public:
    int subsetSum(vector<int>& nums, int sum){
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,0));
        if(nums[0] == 0 )
            dp[0][0] = 2;
        else
            dp[0][0] = 1;
        if(nums[0] !=0 && nums[0] <= sum)
            dp[0][nums[0]] = 1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=sum;j++){
                int no = dp[i-1][j];
                int take = 0;
                if(nums[i] <= j)
                    take = dp[i-1][j-nums[i]];
                dp[i][j] = no+take;
            }
        }
        return dp[n-1][sum];
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
      int s = 0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        int sum = (s-target)/2;
        if((s-target)%2 != 0 || (s-target)<0 ) 
            return 0;
        
        
        return subsetSum(nums,sum);
        
    }
};