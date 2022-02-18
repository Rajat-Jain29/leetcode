class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v=arr; vector<int>v1;
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        int k=0;
        for(int i=0;i<v.size();i++)
        {
            if(mp[v[i]]==0)mp[v[i]]=++k;
            
                
        }
        
        for(int i=0;i<arr.size();i++)
        {
            v1.push_back(mp[arr[i]]);
        }
        return v1;
    }
};