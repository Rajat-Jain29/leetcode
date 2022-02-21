class Solution {
public:
    bool isPalin(string s){
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        if(s.empty())
            return true;
        string res = "";
        for(int i=0;i<s.length();i++){
            if(s[i] >= 65 && s[i] <= 90){
                s[i]+=32;    
            }
            if(isalpha(s[i]) || isdigit(s[i]))   
                res+=s[i];
        }
        cout<<res<<" ";
        return isPalin(res);
    }
};