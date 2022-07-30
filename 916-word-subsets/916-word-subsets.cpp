class Solution {
public:
    int charcount(string s,char c){
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == c)
                cnt++;
        }
        return cnt;
    }
    bool subset( string s, unordered_map<int,int> &m){
        
            for(char j='a' ; j<= 'z' ;j++){
                 if( charcount( s , j ) < m[j - 'a'] )
                     return false;
            }
           
        
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       unordered_map<int,int> m;
        for(int i=0;i<words2.size();i++){
            for(char j = 'a'; j<='z';j++){
                m[ j - 'a' ] = max( m[j-'a'] , charcount( words2[i] , j ) );
            }
        }
        
        vector<string> res;
        for(auto s : words1){
            if( subset(s ,m ) ){
                res.push_back(s);
            }
        }
        return res;
        
    }
};