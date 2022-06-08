class Solution {
public:
    vector<vector<int>> res;
    void solve(int i,vector<int> &p,vector<int>& candidates, int target,int sum){
        
        if( i == candidates.size() ){
            if( target == 0 ){
                res.push_back(p);
            }
               return;
        }
        if(candidates[i] <= target){
            p.push_back(candidates[i]);
            solve(i,p,candidates,target-candidates[i],sum);
            p.pop_back();
        }
        solve(i+1,p,candidates,target,sum);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> p;
        solve(0,p,candidates,target,0);
        return res;
        
    }
};