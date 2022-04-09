class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        priority_queue<pair<int,int>> q;
        for(auto it : m){
            q.push( {it.second , it.first} );
        }
        vector<int> res;
        while(k>0){
            res.push_back(q.top().second);
            q.pop();
            k--;
        }
        return res;
    }
};