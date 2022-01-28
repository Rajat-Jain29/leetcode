class Solution {
public:
    int maxDepth(string s) {
        int k = 0;
        int mx = 0;
        for(auto c : s){
            if(c =='('){
                k++;
                mx = max(k,mx);
            }
            else if(c==')'){
                k--;
            }
        }
        return mx;
    }
};