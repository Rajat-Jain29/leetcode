class Solution {
public:
    int valid(vector<vector<int>> &a , int i,int j){
        if(i<0 || j<0 || i>=a.size() || j>= a[0].size())
            return 0;
        return a[i][j];
    }
    int next(vector<vector<int>> &a , int i,int j){
        if(a[i][j] == 0){
        int x = valid(a,i,j-1)+valid(a,i,j+1)+valid(a,i+1,j-1)+valid(a,i+1,j)+valid(a,i+1,j+1)+
            valid(a,i-1,j-1)+valid(a,i-1,j)+valid(a,i-1,j+1);
            if(x==3)
                return 1;
            else
                return 0;
        }
        else{
    int x = valid(a,i,j-1)+valid(a,i,j+1)+valid(a,i+1,j-1)+valid(a,i+1,j)+valid(a,i+1,j+1)+
            valid(a,i-1,j-1)+valid(a,i-1,j)+valid(a,i-1,j+1);
            if(x==2 || x==3)
                return 1;
            else
                return 0;
        }
        
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> a = board;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j] = next(a,i,j);
            }
        }
        
    }
};