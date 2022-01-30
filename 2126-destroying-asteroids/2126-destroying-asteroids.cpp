class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxx = *max_element(nums.begin(),nums.end());
        // 3 5 9 19 21 
        for(int i=0;i<nums.size();i++){
            if(mass >  maxx)
                return true;
            if(nums[i] <= mass){
                mass+=nums[i];
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};