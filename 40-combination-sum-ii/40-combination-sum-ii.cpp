class Solution {
public:
     vector<vector<int>> res;
    void solve(int i,vector<int>& candidates,vector<int> &p,int target){
        if(target == 0){
            res.push_back(p);
            return;
        }
        for(int j=i;j<candidates.size();j++){
             if( j > i && candidates[j] == candidates[j-1]  )
                continue;
            if(candidates[j] > target)
                break;
            p.push_back(candidates[j]);
            solve(j+1,candidates,p,target-candidates[j]);
            p.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> p;
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,p,target);
        return res;
    }
};