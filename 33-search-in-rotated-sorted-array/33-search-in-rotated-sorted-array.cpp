class Solution {
public:
    int solve(vector<int> &nums){
        int l = 0;
        int r = nums.size()-1;
        while(l < r){
            int mid = l + (r-l)/2;
            if(nums[0] <= nums[mid] ){
                l = mid+1;
            }
            else
                r = mid;
        }
        return l;
    }
    int binary(vector<int> &nums,int l, int r, int tar){
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == tar){
                return mid;
            }
            else if( nums[mid] > tar )
                r = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = solve(nums);
        int n = nums.size();
        if( target >= nums[pivot] && target <= nums[nums.size()-1] )
            return binary(nums,pivot,n-1,target);
        else
            return binary(nums,0,pivot-1,target);
    }
};