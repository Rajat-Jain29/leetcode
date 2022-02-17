class Solution {
public:
    void findComb(int index,vector<int> &candidates,int target,vector<vector<int>> &res,vector<int> &ds){
        if(candidates.size() == index){
            if(target == 0)
                res.push_back(ds);
            return ;
        }
        
        if(candidates[index] <= target){
            
            ds.push_back(candidates[index]);
            findComb(index,candidates,target - candidates[index] ,res,ds);
            ds.pop_back();
        }
        
        findComb(index+1,candidates,target,res,ds);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       
       
        
        
        
        
        
        vector<vector<int>> res;
        vector<int> ds;
        findComb(0,candidates,target,res,ds);
        return res;
    }
};