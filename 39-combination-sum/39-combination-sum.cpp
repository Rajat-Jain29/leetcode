class Solution {
public:
    vector<vector<int>> res;
    void find(int i,vector<int>& nums, int k,vector<int> &p){
        if(nums.size() == i){
            if(k==0)
                res.push_back(p);
            return ;
        }
        
        if(nums[i] <= k ){
            p.push_back(nums[i]);
            find(i,nums,k-nums[i],p);
            p.pop_back();
        }
        
        find(i+1,nums,k,p);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> p;
        find(0,candidates,target,p);
        return res;
      
    }
};