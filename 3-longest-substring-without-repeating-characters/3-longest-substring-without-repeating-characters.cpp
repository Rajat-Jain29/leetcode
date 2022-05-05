class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int k=0 , res = 0 ,e=0,p=0;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i]) != m.end() && m[s[i]] >= e ){
                e = m[s[i]] + 1 ;
            }
             m[s[i]] = i;
            res = max(res, i-e+1);
        }
        return res;
        
      
    }
};