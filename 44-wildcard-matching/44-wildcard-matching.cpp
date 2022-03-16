class Solution {
public:
    bool isMatch(string s, string p) {
       int n = p.length();
       int m = s.length();
       vector<vector<bool>> dp(n+1,vector<bool>(m+1,false));
     // both exhaust
        dp[0][0] = true;
        
      // pattern got exhaust  
        for(int i=1;i<=m;i++)
            dp[0][i] = false;
        
       // string got exhaust and pattern must contains '***'
        for(int i=1;i<=n;i++){
            bool flag = true;
            for(int j=1;j<=i;j++){
                if(p[j-1] != '*'){
                    flag = false;
                    break;
                }
                    
            }
            
         
        
                dp[i][0] = flag;
        }
         
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(p[i-1] == s[j-1] || p[i-1] == '?')
                    dp[i][j] = dp[i-1][j-1];
                else if(p[i-1] == '*')
                    dp[i][j] = dp[i][j-1] | dp[i-1][j];
                else
                    dp[i][j] = false;
            }
        }
        return dp[n][m];
    }
};