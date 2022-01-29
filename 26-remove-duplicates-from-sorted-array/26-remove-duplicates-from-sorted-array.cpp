class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return nums.size();
        
        int k = 0;
        // 1 1 2 2 3 3 3
        int j = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1]){
                nums[j] = nums[i+1];
                j++;
            }
        }
        return j;
    }
};