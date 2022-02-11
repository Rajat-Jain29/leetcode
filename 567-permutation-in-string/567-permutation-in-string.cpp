class Solution {
public:
    // bool equal( unordered_map<char,int> &m , unordered_map<char,int> &p ){
    //     for(int i=0;i<26;i++){
    //         if(m[i] != p[i])
    //             return false;
    //     }
    //     return true;
    // }
    bool checkInclusion(string s1, string s2) {
        vector<int> m(26,0),p(26,0);
        if(s1.length() > s2.length())
            return false;
        for(int i=0;i<s1.length();i++){
            m[s1[i] - 'a']++;
            p[s2[i] - 'a']++;
        }
        for(int i=s1.length();i<s2.length();i++){
            if(m==p)
                return true;
            p[s2[i] - 'a']++;
            p[s2[i-s1.length()] - 'a']--;
        }
         if(m==p)
                return true;
        return false;
        
    }
 
};