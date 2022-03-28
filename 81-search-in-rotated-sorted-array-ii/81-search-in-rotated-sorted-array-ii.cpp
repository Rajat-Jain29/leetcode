class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int m = (i+j)/2;
            if(target == nums[m])
                return true;
            else if(nums[m] > target)
                j = m-1;
            else
                i=m+1;
        }
        return false;
    }
};