class Solution {
public:
    vector<vector<int>> res;
    set<vector<int>> s;
    void solve(int i,vector<int>& nums,vector<int>& p){
        if(i == nums.size()){
            s.insert(p);
            return ;
        }
        p.push_back(nums[i]);
        solve(i+1,nums,p);
        p.pop_back();
        solve(i+1,nums,p);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> p;
        sort(nums.begin(),nums.end());
        solve(0,nums,p);
        for(auto it : s){
            res.push_back(it);
        }
        return res;
    }
};