class Solution {
public:
    void dfs(int i, int j,vector<vector<bool>> &vis,vector<vector<char>>& grid){
        if(i < 0 || i>= grid.size() || j<0 || j>= grid[0].size() || vis[i][j] == true || grid[i][j] == '0')
            return;
        int dirX[4] = {0,1,0,-1};
        int dirY[4] = {1,0,-1,0};
        vis[i][j] = true;
        for(int k=0;k<4;k++){
            dfs(i+dirX[k] , j+ dirY[k] , vis , grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<bool>> vis(m, vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(vis[i][j] == false && grid[i][j] == '1'){
                dfs(i,j,vis,grid);
                cnt++;
            }
        }
        }
        return cnt;
    }
};