class Solution {
public:
    int dir[4][2] = {{0,-1},{-1,0},{0,1},{1,0}};
    int dfs(vector<vector<int>>& m , int i,int j,vector<vector<int>> &mem){
        int maxx = 0;
        if(mem[i][j] > 0)
            return mem[i][j];
       for(auto d : dir){
           int x = d[0] + i;
           int y = d[1] + j;
           if(x >=0 && y>=0 && x<m.size() && y<m[0].size() && m[x][y] > m[i][j] ){
               maxx = max(maxx,dfs(m,x,y,mem));
           }
       }
        mem[i][j] = maxx+1;
        return maxx+1;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size() == 0)
            return 0;
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> mem(m,vector<int>(n,0));
        int path = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                path = max(path , dfs(matrix,i,j,mem) );
            }
        }
        return path;
    }
};