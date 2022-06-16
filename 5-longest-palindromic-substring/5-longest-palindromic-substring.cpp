class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1)
            return s;
        int st = 0;
        int end = 0;
        int max_len = 1;
        int n = s.length();
        // odd length
        for(int i=0;i<n;i++){
            int l  = i,h=i;
            while(l >=0 && h < n){
                if(s[l] == s[h]){
                    l--;
                    h++;
                }
                else{
                    break;
                }
            }
            int len = h-l-1;
            if(len > max_len){
                max_len = len;
                st = l+1;
                end =h-1;
            }
            
        }
         // even length
        for(int i=0;i<n;i++){
            int l  = i,h=i+1;
            while(l >=0 && h < n){
                if(s[l] == s[h]){
                    l--;
                    h++;
                }
                else{
                    break;
                }
            }
            int len = h-l-1;
            if(len > max_len){
                max_len = len;
                st = l+1;
                end = h-1;
            }
            
        }
        return s.substr(st,max_len);
    }
};