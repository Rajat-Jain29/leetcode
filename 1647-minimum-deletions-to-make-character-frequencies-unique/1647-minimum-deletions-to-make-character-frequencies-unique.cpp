class Solution {
public:
    int minDeletions(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        vector<int> p;
        int  k = 0;
        for(auto it : m){
           int x = it.second;
            while( find(p.begin(),p.end(), x) != p.end() && x > 0 ){
                k++;
                x--;
            }
            
            p.push_back(x);
        }
        for(int i : p)
            cout<<i<<" ";
        return k;
    }
};