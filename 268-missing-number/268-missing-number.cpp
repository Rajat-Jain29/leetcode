class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++){
            if( find(nums.begin(),nums.end(),i) == nums.end())
                return i;
        }
        return i;
    }
};