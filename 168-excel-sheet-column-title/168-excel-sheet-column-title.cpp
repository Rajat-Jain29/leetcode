class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while(n>0){
            int k = (n-1)%26;
            res += (k+'A');
            n = (n-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};