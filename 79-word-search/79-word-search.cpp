class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int k){
        if( i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[k] ){
            return false;
        }
        if( k == word.length() - 1)
            return true;
        board[i][j] = '0';
        bool res = dfs(board,word,i+1,j,k+1) || dfs(board,word,i-1,j,k+1)
            || dfs(board,word,i,j+1,k+1) ||  dfs(board,word,i,j-1,k+1) ;
        board[i][j] = word[k];
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int k = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if( board[i][j] == word[0] ){
                    if( dfs(board,word,i,j,k) )
                        return true;
                }
            }
        }   
        return false;
    }
};