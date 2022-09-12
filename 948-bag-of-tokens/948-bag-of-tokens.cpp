class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        if( tokens.size() == 0 || power < tokens[0] )
            return 0;
        int l = 0;
        int h = tokens.size() -1;
        int cnt = 0;
        while( l <= h){
            
            while( l<tokens.size() && power >= tokens[l]  ){
                power -= tokens[l];
                l++;
                cnt++;
            }
            
            if( h > l ){
                cnt--;
                power += tokens[h];
                h--;
            }
            else if(l == h)
                break;
            
        }
        return cnt;
    }
};