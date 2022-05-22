class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(i==0 || (i>0 && nums[i] != nums[i-1]) ){
                int l = i+1 , h = nums.size()-1 , s = 0 - nums[i];
                while(l<h){
                    if(nums[l] + nums[h] == s){
                        res.push_back({nums[l] , nums[h] , nums[i]});
                        
                        while(l<h && nums[l] == nums[l+1])
                            l++;
                        while(l<h && nums[h] == nums[h-1])
                            h--;
                        l++;
                        h--;
                    }
                    else if(nums[l] + nums[h] < s)
                        l++;
                    else
                        h--;
                }
            }
        }
        return res;
    }
};