class Solution {
public:
    vector<vector<int>> generate(int numRows) {

      vector<vector<int>> res;
       vector<int> p;
        for(int i=0;i<numRows;i++){
            
            p.insert(p.begin() , 1);
            for(int j=1;j<p.size()-1;j++){
                p[j] = p[j] + p[j+1];
            }
            res.push_back(p);
        }
        return res;
    }
};