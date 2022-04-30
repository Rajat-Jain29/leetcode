class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
         vector<int> p = nums[0];
           
        for(auto it:nums){
            if(it[0] <= p[1] )
                p[1] = max(p[1] , it[1]);
            else{
                res.push_back(p);
                p=it;
            }
        }
        res.push_back(p);
            return res;
    }
};