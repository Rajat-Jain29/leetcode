class Solution {
public:
    bool search(vector<int>& nums, int target) {
       
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            if(target == nums[i] || target == nums[j] )
                return true;
            else if(nums[i] < target){
                i++;
            }
            else if(nums[j] > target){
                j--;
            }
            else
                break;
            
        }
        return false;
    }
};