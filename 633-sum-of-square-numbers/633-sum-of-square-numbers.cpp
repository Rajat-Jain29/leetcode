class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_map<int,int> m;
        for(int i=0;i<=sqrt(c);i++){
            m[i*i] = i*i;
        }
        for(int i=0;i<=sqrt(c);i++){
             if( m.find(c-m[i*i]) != m.end() )
                 return true;
        }
        return false;
       
    }
};