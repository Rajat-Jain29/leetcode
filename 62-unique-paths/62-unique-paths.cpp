class Solution {
public:
    int uniquePaths(int m, int n) {
//         int dp[m][n];
         
//         for(int i=0;i<m;i++){
            
//             for(int j=0;j<n;j++){
//                   int up=0,left=0;
//                 if(i==0 && j==0)
//                     dp[i][j] = 1;
//                 else{
                 
//                 if(i>0)
//                     left = dp[i-1][j];
//                 if(j>0)
//                     up = dp[i][j-1];
                    
//                 dp[i][j] = up+left;
//                 }
                
//             }
           
//         }
//         return dp[m-1][n-1];
        
        int M = m+n-2;
        int N = m-1;
        double res = 1;
        for(int i=1;i<=N;i++){
            res = res*(M-N+i)/i;
        }
        return (int)res;
    }
};