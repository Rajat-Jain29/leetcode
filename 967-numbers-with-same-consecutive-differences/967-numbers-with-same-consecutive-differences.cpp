class Solution {
public:
    void dfs(int n,int i,int k,vector<int> &res){
        if( n == 0){
            res.push_back(i);
            return ;
        }
        int l = i%10;
        if( l+k < 10 )
            dfs( n-1, i*10 + l + k ,k,res );
        if( l-k >=0 && k>0 )
            dfs(n-1 , i*10 + l - k , k , res);
            
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        if(n == 1)
            return {1,2,3,4,5,6,7,8,9};
        vector<int> res;
        for(int i=1;i<10;i++){
            dfs( n-1 , i , k ,res  );
        }
        return res;
    }
};