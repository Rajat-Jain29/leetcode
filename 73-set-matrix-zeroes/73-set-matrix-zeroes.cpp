class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> p,q;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0)
                    p.push_back(i) , q.push_back(j);
            }
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if( find(p.begin(),p.end(),i) != p.end() || find(q.begin(),q.end(),j) != q.end()  ){
                    matrix[i][j] = 0;
                }  
            }
        }
    }
};