class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
       int  k = 0,i;
        for(i=0;i<nums.size() ;i++){
            int start = nums[i];
            while(i!=nums.size()-1  && nums[i]+1 == nums[i+1] )
                i++;
            if(start == nums[i])
                res.push_back( to_string(start) );
            else
                res.push_back(to_string(start) +  "->" + to_string(nums[i]));
        }
        
       return res;
    }
};