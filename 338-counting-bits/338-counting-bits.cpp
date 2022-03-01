class Solution {
public:
    int count(int n){
        int res = 0;
        while(n > 0){
            int x = n%2;
            if(x==1)
                res++;
            n = n/2;
        }
        return res;
    }
    vector<int> countBits(int n) {
         vector<int> p;
        for(int i=0;i<=n;i++){
             p.push_back( count(i) );
                
        }
        return p;
    }
};