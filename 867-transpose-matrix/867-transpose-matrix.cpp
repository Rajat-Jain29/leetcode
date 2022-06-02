class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> p;
        for(int i=0;i<matrix[0].size();i++){
            vector<int> q;
            for(int j=0;j<matrix.size();j++){
               q.push_back(matrix[j][i]);
            }
            p.push_back(q);
        }
        return p;
    }
};