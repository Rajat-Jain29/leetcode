class Solution {
public:
    int minOperations(vector<int>& nums) {
        int k = 0;
        for(int i=0;i<nums.size()-1;i++){
            while(nums[i] >= nums[i+1]){
                // nums[i+1]++;
                int m = abs(nums[i] - nums[i+1]);
                k += (m+1);
                int  p = m+1;
                nums[i+1] = nums[i+1]+p;
            }
        }
        return k;
    }
};