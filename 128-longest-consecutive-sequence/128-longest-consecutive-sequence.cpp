class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.size()==0)
        return 0;
       if(nums.size() == 1)
           return 1;
        sort(nums.begin(),nums.end());
        int k = 1;
        int res = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1]){
            if(nums[i]+1 == nums[i+1] )
                k++;
            else
                k=1;
                res = max(k,res);
            }
        }
        return res = max(k,res);;
    }
};