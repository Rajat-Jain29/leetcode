class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        for(int i=1;i<n;i++){
            if( n/pow(5,i) == 0 )
                break;
            res += n/pow(5,i);
        }
        return res;
    }
};