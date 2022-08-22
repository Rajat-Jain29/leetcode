class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;;i++){
            if( n == pow(4,i) )
                return true;
            if( n < pow(4,i) )
                return false;
        }
        return false;
        
    }
};