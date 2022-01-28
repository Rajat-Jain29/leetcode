class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int dp[n][m];
        for(int i=0;i<m;i++)
            dp[0][i] = matrix[0][i];
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int d,l,r;
                d = matrix[i][j] + dp[i-1][j];
                if(j-1>=0)
                    l = matrix[i][j] + dp[i-1][j-1];
                else
                    l=1e9;
                if(j+1<m)
                    r = matrix[i][j] + dp[i-1][j+1];
                else
                    r = 1e9;
                dp[i][j] = min(d,min(l,r));                
            }
        }
        int mx = INT_MAX;
        for(int i=0;i<m;i++){
            mx = min(mx, dp[n-1][i]);
        }
        return mx;
        
    }
};