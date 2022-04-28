class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0 , res = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1)
                k++;
            else
                k=0;
            res = max(res,k);
        }
        return res;
    }
};