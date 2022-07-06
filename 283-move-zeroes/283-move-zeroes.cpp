class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                nums[p] = nums[i];
                p++;
            }
        }
        for(int i=p;i<n;i++){
            nums[i]=0;
        }
    }
};