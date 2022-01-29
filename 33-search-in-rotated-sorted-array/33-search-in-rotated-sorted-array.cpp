class Solution {
public:
    int pivot(vector<int>& nums){
        int left = 0;
        int right = nums.size()-1;
        
        while(left<right){
            int mid = left + (right-left)/2;
            
            if(nums[mid] >= nums[0] ){
                left = mid+1;
            }
            else{
                right = mid;
            }
            
        }
        return left;
    }
    
    int binary(vector<int>& nums, int l,int r,int target){
        
        int left = l;
        int right = r;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                right = mid-1;
            else
                left = mid+1;
        }
        return -1;
        
    }
    int search(vector<int>& nums, int target) {
        int x = pivot(nums);
        int n = nums.size();
      
        
        if(target >=nums[x] && target<= nums[n-1] ){
            return binary(nums,x,n-1,target);
        }
        else{
            return binary(nums,0,x-1,target);
        }
    }
};