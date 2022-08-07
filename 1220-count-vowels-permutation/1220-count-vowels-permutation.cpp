class Solution {
public:
    int MOD = 1e9+7;
    long total = 0;
    unordered_map<string,long> m;
    long helper(int rem , char c){
        if(rem == 0)
            return 1;
        string k = to_string(rem) + c;
        if(m[k])
            return m[k];
        switch(c){
            case 'a':total = helper(rem-1,'e')%MOD;
                break;
            case 'e':total = helper(rem-1,'a')%MOD + helper(rem-1,'i')%MOD;
                break;
            case 'i':total =( helper(rem-1,'a')%MOD + helper(rem-1,'e')%MOD+helper(rem-1,'o')%MOD+helper(rem-1,'u')%MOD)%MOD;
                break;
            case 'o':total = helper(rem-1,'i')%MOD+helper(rem-1,'u')%MOD;
                break;
            case 'u':total = helper(rem-1,'a')%MOD;
                break;
                
        }
        m[k] = total;
        return total;
    }
    int countVowelPermutation(int n) {
        long total = 0;
        char s[5] = {'a','e','i','o','u'};
        for(auto it : s){
            total = (total + helper(n-1,it))%MOD;
        }
        return (int)total;
    }
};