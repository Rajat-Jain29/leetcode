class Solution {
public:
//     void sub(vector<int> &num,vector<vector<int>> &res,vector<int> &subset,int i){
//         res.push_back(subset);
//         for(int p = i;p<num.size();p++){
//             subset.push_back(num[p]);
//             sub(num,res,subset,i+1);
//             subset.pop_back();
//         }
        
        
//     }
    vector<vector<int>> subsets(vector<int>& nums) {
        
       vector<vector<int>> res;
        res.push_back({});
        for(int i=0;i<nums.size();i++){
            int n = res.size();
            for(int j=0;j<n;j++){
                res[j].push_back(nums[i]);
                res.push_back(res[j]);
                res[j].pop_back();
            }
           
        }
        // return res;
        // int i = 0;
        // sub(nums,res,subs,i);
        return res;
    }
};