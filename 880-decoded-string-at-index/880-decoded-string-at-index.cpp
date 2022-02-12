class Solution {
public:
     
    string decodeAtIndex(string s, int k) {
     long long size = 0;
     for(int i=0;i<s.length();i++){
         if(isdigit(s[i]))
             size = size*(s[i] - '0');
         else
             size++;
     }
        int n = s.length();
        for(int i=n-1;i>=0;i--){
            k = k%size;
            if ( (k==size || k==0) && isalpha(s[i]) )
                return string(1,s[i]);
            else if( isdigit(s[i]) ){
                size = size/(s[i] - '0');
            }
            else
                size--;
        }
        return "";
        
    }
};