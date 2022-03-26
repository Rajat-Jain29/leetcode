class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1 , vector<vector<int>> (2 , vector<int>(k+1,0)) );
        // cap = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++)
                dp[i][j][0] = 0;
        }
        // ind == n
        for(int i=0;i<2;i++){
            for(int j=0;j<=k;j++)
                dp[n][i][j] = 0;
        }
        
        for(int i = n-1;i>=0;i--){
            for(int j=0;j<2;j++){
                for(int m=1;m<k+1;m++){
                    if(j==1){
                        dp[i][j][m] = max( -prices[i] + dp[i+1][0][m] , 0 + dp[i+1][1][m] );
                    }
                    else{
                        dp[i][j][m] = max(prices[i] + dp[i+1][1][m-1] , 0 + dp[i+1][0][m]  );
                    }
                }
            }
        }
        return dp[0][1][k];
    }
};