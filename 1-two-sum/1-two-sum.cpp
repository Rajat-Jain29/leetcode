class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> p;
        for(int i=0;i<nums.size();i++){
            if( m.find(target-nums[i]) != m.end() ){
                p.push_back(m[target-nums[i]]);
                p.push_back(i);
                return p;
            }
            m[nums[i]] = i;
        }
        return p;
    }
};