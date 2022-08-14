class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod = pow(10,9)+7;
        unordered_map<int,long> m;
        sort(arr.begin(),arr.end());
        m[arr[0]] = 1;
        int res = 0;
        for(int i=1;i<arr.size();i++){
            long cnt = 1;
            for(auto it : m){
                int elm = it.first;
                if( arr[i]%elm == 0 && m.find(arr[i]/elm) != m.end() )
                    cnt += m[arr[i]/elm]*m[elm];
            }
            m[arr[i]] = cnt;
        }
        for(auto x : m){
            res = (res + x.second)%mod;
        }
        return res;
    }
};