class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+2,vector<int>(2,0));
        for(int i=0;i<2;i++)
            dp[n][i] = 0;
        
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<2;j++){
                if(j==1){
                    dp[i][j] = max(-prices[i] + dp[i+1][0] ,  0 + dp[i+1][1] ); 
                }
                else
                    dp[i][j] = max(prices[i] + dp[i+1][1] - fee , 0 + dp[i+1][0] );
            }
        }
        return dp[0][1];
    }
};