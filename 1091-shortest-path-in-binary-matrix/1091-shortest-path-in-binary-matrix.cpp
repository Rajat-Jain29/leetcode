class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1)
            return -1;
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        int sol = 1;
        q.push({0,0});
        grid[0][0] = 1;
        int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if( x == m-1 && y ==n-1)
                    return sol;
                for(auto d : dir){
                    int r = x + d[0];
                    int c = y + d[1];
                    if(r>=0 && r<m  && c>=0 && c<n && grid[r][c] ==0){
                        q.push( {r,c} );
                        grid[r][c] = 1;
                    }
                }
            }
            sol++;
        }
        return -1;
    }
};