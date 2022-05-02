class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> p,q;
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 ==0)
                p.push_back(nums[i]);
            else
                q.push_back(nums[i]);
        }
        p.insert(p.end(),q.begin(),q.end());
        return p;
    }
};