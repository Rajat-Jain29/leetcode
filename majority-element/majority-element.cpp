class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        unordered_map<int,int> :: iterator it ;
        int ans;
        for(auto it: m){
           if(it.second > (nums.size())/2)
               ans = it.first;
        }
        
        return ans;;
       
    }
};