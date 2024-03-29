class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 0;
        int avg = nums[nums.size()/2];
        for(int i=0;i<nums.size();i++){
            res += abs(avg - nums[i]);
        }
        return res;
    }
};