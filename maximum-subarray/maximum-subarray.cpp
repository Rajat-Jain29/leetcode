class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp = nums[0];
        int curr = nums[0];
        for(int i=1;i<nums.size();i++){
            temp = max(nums[i],temp+nums[i]);
            curr = max(curr,temp);
        }
        return curr;
    }
};