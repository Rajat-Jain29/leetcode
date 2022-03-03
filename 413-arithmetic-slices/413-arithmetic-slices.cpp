class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
         int n = nums.size();
        int ans = 0 , c=0;
        for(int i=1;i<n-1;i++){
            if(nums[i] - nums[i-1] == nums[i+1] - nums[i])
                c++;
            else{
                ans += c*(c+1)/2;
                c=0;
            }
        }
         ans += c*(c+1)/2;
        return ans;
    }
};