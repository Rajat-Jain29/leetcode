class Solution {
public:
    int first(vector<int>& nums, int target){
        int i = 0;
        int j = nums.size()-1;
        int ans = -1;
        vector<int> p;
        while(i <= j){
            int m = (i+j)/2;
            if(nums[m] >= target){
                j =m-1;
            }
            else
                i=m+1;
            if(nums[m] == target)
                ans = m;
        }
        return ans;
    }
    int second(vector<int>& nums, int target){
        int i = 0;
        int j = nums.size()-1;
        int ans = -1;
        vector<int> p;
        while(i <= j){
            int m = (i+j)/2;
            if(nums[m] <= target){
                i =m+1;
            }
            else
                j=m-1;
            if(nums[m] == target)
                ans = m;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> p(2);
        p[0] = first(nums,target);
        p[1] = second(nums,target);
        return p;
    }
};