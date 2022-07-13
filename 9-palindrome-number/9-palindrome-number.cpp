class Solution {
public:
    int rev(int x){
        int res = 0;
        while(x > 0){
            int p = x %10;
            if(res >= INT_MAX/10 || res <= INT_MIN/10)
                return false;
            res = res*10 + p;
            x = x/10;
        }
        return res;
    }
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int y = rev(x);
        return x == y;
    }
};