class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        multiset<int> s( changed.begin() , changed.end() );
        int n = changed.size();
        if( n % 2 == 1)
            return {};
        vector<int> res;
        for(int i=0;i<n;i+=2){
            int x = *s.begin();
            res.push_back(x);
            s.erase(s.begin());
            if( s.find( 2*x ) == s.end() )
                return {};
            s.erase( s.find(2*x)  );
        }
        return res;
    }
};