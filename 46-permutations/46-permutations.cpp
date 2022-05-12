class Solution {
public:
    vector<vector<int>> res;
   void helper(vector<int> &nums,int i){
       if(i == nums.size()){
           res.push_back(nums);
           return ;
       }
       for(int j=i;j<nums.size();j++){
           swap(nums[i] , nums[j]);
           helper(nums,i+1);
           swap(nums[i] , nums[j]);

       }

        // if(nums.size() == 0)
        //     return {{}};
        // vector<vector<int>> res;
        // for(int i=0;i<nums.size();i++){
        //     vector<int> temp;
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j){
        //             temp.push_back(nums[j]);
        //         }
        //     }
        //    vector<vector<int>> v = helper(temp);
        //     for(auto it: v){
        //         it.push_back(nums[i]);
        //         res.push_back(it);
        //     }
        // }
        // return res;
    }
    vector<vector<int>> permute(vector<int>& nums) {
         helper(nums,0);
        return res;
    }
};