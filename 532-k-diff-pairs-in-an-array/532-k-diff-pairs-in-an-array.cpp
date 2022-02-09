class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        sort(nums.begin(),nums.end());
        set<pair<int,int>> s;
        int res = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if( abs(nums[i] - nums[j]) == k  )
                   s.insert(  {nums[i],nums[j]} );
                // m.insert(abs(nums[i] - nums[j])   )++;
               //  m[ abs(nums[i] - nums[j]) ]++;
            }
        }
        // int res = 0;
        // for(auto it : m){
        //     if(it.first == k)
        //         return it.second;
        // }
        return s.size();
    }
};