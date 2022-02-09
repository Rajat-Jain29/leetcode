class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        vector<int> p;
       for(int i=0;i<nums.size();i++){
           if(nums[i] != 0)
               p.push_back(nums[i]);
           else
               k++;
       }
        nums.clear();
        for(int i=0;i<p.size();i++)
            nums.push_back(p[i]);
        for(int i=0;i<k;i++)
            nums.push_back(0);
        
        
        
        
    }
};