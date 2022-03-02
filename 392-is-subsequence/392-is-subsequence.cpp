class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() == 0)
            return true;
        int i=0,j=0;
        while(j<t.length()){
            if(s[i] == t[j]){
                i++;
                j++;
                if(i==s.length())
                    return true;
                
            }
            else
                j++;
        }
        return false;
    }
};