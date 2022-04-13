class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        int k=1,i,j,m,v,x;
        for( i=0;i<n;i++){
            for( j=i;j<n-i;j++){
                res[i][j] = k; 
               k++;
            }
            for( m=i+1;m<n-i;m++){
                res[m][n-i-1] = k;
                k++;
            }
            for( v=n-i-2;v>=i;v--){
                res[n-i-1][v] = k;
                k++;
            }
            for( x=n-i-2;x>i;x--){
                res[x][i] = k;
                k++;
            }
            
        }
        return res;
    }
};