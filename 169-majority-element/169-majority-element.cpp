class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        int res = 0;
        for(auto it : m){
            if(it.second > (nums.size()/2) ){
                res = it.first;
                break;
            }
        }
        return res;
    }
};