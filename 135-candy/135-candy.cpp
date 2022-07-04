class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int res = 0;
        vector<int> p(n,1);
        for(int i=1;i<n;i++){
            if( ratings[i] > ratings[i-1] && p[i] <= p[i-1]  )
                p[i] = 1 + p[i-1];
        }
        for(int i=n-2;i>=0;i--){
            if( ratings[i] > ratings[i+1] && p[i] <= p[i+1] )
                p[i] = 1 + p[i+1];
        }
        for(int i : p)
            res += i;
        return res;
    }
};