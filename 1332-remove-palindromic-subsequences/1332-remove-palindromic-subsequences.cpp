class Solution {
public:
    
    bool isPalindrome(string s){
        int i = 0;
        int j = s.length()-1;
        bool ans = true;
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                ans = false;
                break;
            }
                
        }
        return ans;
    }
    int removePalindromeSub(string s) {
       if( isPalindrome(s) )
            return 1;
        return 2;
    }
};