class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> q;
       for(int i=0;i<n;i++){
           vector<int> p;
           for(int j=n-1;j>=0;j--){
               p.push_back(matrix[j][i]);
           }
           q.push_back(p);
       }
         matrix.clear();
       for(int i=0;i<n;i++){
          
           matrix.push_back(q[i]);
       } 
        
        
    }
};