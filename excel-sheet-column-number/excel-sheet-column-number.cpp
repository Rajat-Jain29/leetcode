class Solution {
public:
    int titleToNumber(string s) {
       int res = 0,k=0;
        for(int i = s.length()-1;i>=0;i--){
            res += pow(26,k)*(s[i] - 'A' + 1);
            k++;
        }
        return res;
    }
};