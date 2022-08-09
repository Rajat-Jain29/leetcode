class Solution {
public:
    bool dfs(vector<vector<char>>& board, string &word,int i,int j,vector<vector<bool>> &vis,int k){
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[k]) return false;
        if( k == word.size()-1 )
            return true;
        
        board[i][j] = '0';
     
   
           bool res = dfs(board,word,i+1,j,vis,k+1)|| dfs(board,word,i-1,j,vis,k+1)|| dfs(board,word,i,j+1,vis,k+1)  || dfs(board,word,i,j-1,vis,k+1);
        
           
        board[i][j] = word[k];
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> vis(board.size() , vector<bool>( board[0].size() , false) );
        int k = 0;
        bool res = false;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                
                
                if(board[i][j] == word[0] )
                    if( dfs(board,word,i,j,vis,0))
                        return true;
                    
                
            }
        }
        return false;
    }
};