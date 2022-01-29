class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j = 2;
        if(nums.size() < 3)
            return nums.size();
        // 1 1 1 2 2 3
        for(int i=2;i<nums.size();i++){
            if(nums[i] != nums[j-2]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};