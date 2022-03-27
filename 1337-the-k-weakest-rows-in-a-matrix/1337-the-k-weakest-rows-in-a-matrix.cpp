class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& matrix, int k) {
        vector<int> res , w;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        for(int i=0;i<matrix.size();i++){
            int k = 0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 1)
                    k++;
                    
            }
            q.push( {k , i});
        }
        
        while(k--){
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
        
    }
};