class Solution {
public:
    int dfs(vector<vector<int>> &vis,vector<vector<int>> &grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 0 || vis[i][j] == 1)
            return 0;
        vis[i][j] = 1;
        return 1+dfs(vis,grid,i,j+1) + dfs(vis,grid,i+1,j)+dfs(vis,grid,i,j-1)+dfs(vis,grid,i-1,j);        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int k = 0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j] == 0  && grid[i][j] == 1){
            
                    k = max(k,dfs(vis,grid,i,j));
                } 
            }
        }
        return k;
    }
};