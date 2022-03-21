class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res(26,0);
        for(int i=0;i<s.length();i++)
            res[s[i] - 'a'] = i;
        int st = 0 , e = 0;
        vector<int> p;
        for(int i=0;i<s.length();i++){
            e = max(e, res[s[i] - 'a'] );
            if(i==e){
                p.push_back(i - st + 1);
                st = i+1;
            }
        }
        return p;
    }
};