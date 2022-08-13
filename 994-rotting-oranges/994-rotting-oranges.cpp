class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // r,c,t;
        int fresh = 0;
        int vis[m][n];
        queue< pair<pair<int,int> , int>  > q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
                else
                    vis[i][j] = 0;
                
                if(grid[i][j] == 1)
                    fresh++;
            }
        }
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,-1,1};
        int cnt = 0,tm=0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(tm,t);
            for(int i=0;i<4;i++){
                int nr = r + dx[i];
                int nc = c + dy[i];
                if(nr>=0 && nc >=0 && nr<m && nc<n && vis[nr][nc] == 0 && grid[nr][nc] == 1){
                    q.push( {{nr,nc},t+1} );
                    vis[nr][nc] = 2;
                    cnt++;
                }
            }
        }
        return fresh == cnt ? tm : -1;
    }
};