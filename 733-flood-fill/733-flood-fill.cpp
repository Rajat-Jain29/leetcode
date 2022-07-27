class Solution {
public:
    void dfs( vector<vector<bool>> &vis,int sr,int sc,vector<vector<int>>& image,int color , int old ){
        if(  sr<0 || sr >= image.size() || sc <0 || 
   sc >= image[0].size() )
            return;
        if(image[sr][sc] == old){
            image[sr][sc] = color;
            dfs( vis,sr,sc+1,image,color ,old);
         dfs( vis,sr+1,sc,image,color,old );
         dfs( vis,sr-1,sc,image,color,old );
         dfs( vis,sr,sc-1,image,color,old );
        }
       

     
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int x = image[sr][sc];
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        if( x != color )
            dfs(  vis , sr , sc  ,image,color , x);
       return image;
    }
};