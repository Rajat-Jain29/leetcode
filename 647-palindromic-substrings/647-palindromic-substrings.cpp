class Solution {
public:
    int countSubstrings(string s) {
        int  n = s.length();
        if(n == 0 || n==1)
            return n;
        int cnt = 0;
        
            for(int i=0;i<n;i++){
                int j = i;
                int k = i+1;
                while(j>=0 && k<n && s[j] == s[k]){
                    j--;
                    k++;
                    cnt++;
                }
                // odd
                 j = i;
                 k = i;
                while(j>=0 && k<n && s[j] == s[k]){
                    j--;
                    k++;
                    cnt++;
                }
            }
            return cnt;
        
      
        
    }
};