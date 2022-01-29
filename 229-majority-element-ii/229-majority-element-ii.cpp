class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> p;
       unordered_map<int,int> :: iterator it;
        for(auto it : m){
            if(it.second > nums.size()/3){
                p.push_back(it.first);
            }
        }
        return p;
        
        
    }
};