class Solution {
public:
    vector<char> v = {'a' , 'e' , 'i' , 'o' ,'u'};
    int countVowelStrings(int n) {
        
        vector<vector<int>> dp( n+1,vector<int>(6,0) );
        for(int i=1;i<=n;i++){
            for(int j=1;j<=5;j++){
                
                    dp[i][j] =(  (i>1) ? dp[i-1][j]: 1) + dp[i][j-1];
            }
        }
        return dp[n][5];
        
        
        // int ans = 0;
        // for(char c : v){
        //     ans += count(n-1,c);
        // }
        // return ans;
    }
//     int count(int length ,  char last){
//         int temp = 0;
//         if(length == 0)
//             return 1;
    
//         for(char c : v){
//             if( last >= c )
//                 temp += count(length-1,c);
//         }
//         return temp;
//     }
};