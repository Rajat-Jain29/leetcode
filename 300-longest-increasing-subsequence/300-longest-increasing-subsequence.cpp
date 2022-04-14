class Solution {
public:
    // int f(int ind,int prev,vector<int> &a){
    //     if(ind == a.size())
    //         return 0;
    //     int len = 0 + f(ind+1,prev,a);
    //     if(prev == -1 || a[ind] > a[prev])
    //         len = max(len, 1 + f(ind+1,ind,a) );
    //     return len;
    // }
    int lengthOfLIS(vector<int>& nums) {
        // return f(0,-1,nums);
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=n-1;i>=0;i--){
            for(int prev=i-1;prev>=-1;prev--){
                int len = 0 + dp[i+1][prev+1];
                if(prev == -1 || nums[i] > nums[prev])
                    len = max(len , 1 + dp[i+1][i+1] );
                dp[i][prev+1] = len;
            }
        }
        return dp[0][-1+1];
    }
};