class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>> &grid){
        if( i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j] == true || grid[i][j] == '0' ){
            return ;
        }
        vis[i][j] = true;
        dfs(i+1,j,vis,grid);
        dfs(i-1,j,vis,grid);
        dfs(i,j+1,vis,grid);
        dfs(i,j-1,vis,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis( m,vector<int>(n,false) );

        int cnt = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if( !vis[i][j] && grid[i][j] == '1' ){
                    cnt++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
};