class Solution {
public:
    int titleToNumber(string n) {
        int r=0,k=0;
       for(int i=n.length()-1;i>=0;i--){
           r += pow(26,k)*(n[i]-'A' + 1);
           k++;
       }
        return r;
    }
};