class Solution {
public:
    int reverse(int x) {
        int y = abs(x);
        int rev = 0;
        while(y>0){
            int b = y%10;
             if( (rev > INT_MAX/10) || (rev < INT_MIN/10) ){
                return 0;
            }
            rev = rev*10+b;
            y = y/10;
        }
        if(x<0)
            return -rev;
        return rev;
    }
};