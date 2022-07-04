class Solution {
public:
    bool isPalin(int i,int j,string s){
        while(i<=j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(int i,string s,vector<string> &p,vector<vector<string>> &ans){
        if( i == s.length()){
            ans.push_back(p);
            return ;
        }
        for(int j=i;j<s.length();j++){
            if( isPalin( i,j,s ) ){
                p.push_back( s.substr(i,j-i+1) );
                solve(j+1,s,p,ans);
                p.pop_back();
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> p;
        solve(0,s,p,ans);
        return ans;
    }
};