class Solution {
public:
    bool isSafe(int row,int col,vector<string> &board,int n){
        int drow = row;
        int dcol = col;
        while(row >=0 && col >=0 ){
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        row = drow;
        col = dcol;
        while(col >=0 ){
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        row = drow;
        col = dcol;
        while(row <n && col >=0 ){
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col , int  n , vector<string> &board, vector<vector<string>> &ans){
        if(col == n){
            ans.push_back(board);
            return ;
        }
        for(int i=0;i<n;i++){
            if( isSafe(i,col,board,n) ){
                board[i][col] = 'Q';
                solve(col+1,n,board,ans);
                board[i][col] = '.';
            }
        }
            
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,".");
        string p(n,'.');
        for(int i=0;i<board.size();i++)
            board[i] = p;
        solve(0,n,board,ans);
        return ans;
    }
};