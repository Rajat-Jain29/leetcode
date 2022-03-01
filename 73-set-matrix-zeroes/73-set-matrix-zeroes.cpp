class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m=matrix[0].size();
        set<int> p,q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                     p.insert(i);
                    q.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( p.find(i) != p.end()  || q.find(j) !=  q.end()  )
                    matrix[i][j] = 0;
            }
        }
        
        
        
        
        
    }
};