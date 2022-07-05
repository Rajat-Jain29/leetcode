class Solution {
public:
    vector<vector<int>> res;
   void helper(vector<int> &nums,vector<int> &p,vector<int> &freq){
        if(p.size() == nums.size()){
            res.push_back(p);
            return ;
        }
       for(int i=0;i<nums.size();i++){
           if( freq[i] == 0){
               p.push_back(nums[i]);
               freq[i] = 1;
               helper(nums,p,freq);
               freq[i] = 0;
               p.pop_back();
           }
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> p;
        vector<int> freq(n,0);
        helper(nums,p,freq);
        return res;
    }
};