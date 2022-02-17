class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx = max(mx,nums[i]);    
        }
        for(int i=0;i<nums.size();i++){
            if(mx == nums[i])
                return i;
        }
        return 0;
    }
};