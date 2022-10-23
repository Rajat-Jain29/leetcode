class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums)
            m[i]++;
        int ans = 0;
        vector<int> p;
        for(auto it : m){
            if(it.second == 2){
                p.push_back(it.first);
                break;
            }
        }

        for(int i=1;i<=nums.size();i++){
            if( find(nums.begin(),nums.end() , i) == nums.end() ){
                p.push_back(i);
                break;
            }
                
        }
        return p;
    }
};