class Solution {
public:
    bool subsetSum(int n,vector<int>& nums,int W){
        
        vector<vector<int>> dp(n,vector<int>(W+1,0));
        for(int i=0;i<n;i++){
            dp[i][0] = true;
        }
        if(W==nums[0])
            dp[0][nums[0]] = true;
        
        for(int i=1;i<n;i++){
            for(int j=1;j<=W;j++){
                bool no = dp[i-1][j];
                bool take = false;
                if(nums[i] <= j){
                    take = dp[i-1][j-nums[i]];
                }
                
                dp[i][j] = no || take;
            }
        }
        return dp[n-1][W];
        
//         bool t[nums.size()+1][W+1];
//         for(int i=0;i<nums.size()+1;i++){
//             for(int j=0;j<W+1;j++){
//                 if(i==0)
//                     t[i][j]=false;
//                 if(j==0)
//                     t[i][j]=true;
//             }
//         }
        
//         for(int i=1;i<nums.size()+1;i++){
//             for(int j=1;j<W+1;j++){
//                 if(nums[i-1] <= j){
//                     t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
//                 }
//                 else{
//                     t[i][j] = t[i-1][j];
//                 }
//             }

//         }
        
//         return t[nums.size()][W];
        
        
        
    }
    bool canPartition(vector<int>& nums) {
     
         int sum = 0;
        int n = nums.size();
    for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        
        if(sum%2!=0 ){
            return false;
        }
        else{
            int W = sum/2;
            return subsetSum(n,nums,W);
        }
        
    }
};