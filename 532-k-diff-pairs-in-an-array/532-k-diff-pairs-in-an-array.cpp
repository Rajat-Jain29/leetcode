class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // set<pair<int,int>> s;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if( abs(nums[i] - nums[j]) == k  )
        //            s.insert(  {nums[i],nums[j]} );
        //     }
        // }
        // return s.size();
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        int res = 0;
        for(auto it : m){
            if(k==0){
                if(it.second > 1)
                    res++;
            }
            else{
                if( m.find( it.first+k  )!=m.end() )
                    res++;
            }
        }
        return res;
        
    }
};