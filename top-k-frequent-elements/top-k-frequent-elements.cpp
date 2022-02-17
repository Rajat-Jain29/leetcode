class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        vector<int> res;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it : m){
            p.push({it.second,it.first});
            if(p.size() > k)
                p.pop();
                
        }
        while(p.size() > 0){
            res.push_back(p.top().second);
            p.pop();
        }
            
        
        return res;
    }
};