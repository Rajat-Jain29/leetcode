class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        char p ;
        for(auto it : m){
            if(it.second == 1){
               p = it.first;
            }
                
            
        }
        for(int i=0;i<s.length();i++)
            if(s[i] == p)
                return i;
        return -1;
    }
};