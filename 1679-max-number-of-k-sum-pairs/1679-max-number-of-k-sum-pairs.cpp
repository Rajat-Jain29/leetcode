class Solution {
public:
 
 
    int maxOperations(vector<int>& nums, int k) {
       unordered_map<int,int> m;
        int p = 0;
        for(int i=0;i<nums.size();i++){
            if(m[k-nums[i]] > 0){
                p++;
                m[k-nums[i]]--;    
            }
            else{
                m[nums[i]]++;
            }
                
        }
        return p;
    }
};