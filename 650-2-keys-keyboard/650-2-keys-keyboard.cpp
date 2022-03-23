class Solution {
public:
    int minSteps(int n) {
        string s = "";
        int ans = 0 , d = 2;
        while(n>1){
            while(n % d == 0){
                ans += d;
                n = n/d;
            }
            d++;
        }
        return ans ;
    }
};