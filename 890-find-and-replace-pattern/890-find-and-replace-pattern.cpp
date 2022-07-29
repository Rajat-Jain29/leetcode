class Solution {
public:
   bool solve(string a,string b){
        unordered_map<char,char> m;
        if(a.length() != b.length())
            return false;
        for(int i=0;i<a.length();i++){
            if(m.find(a[i]) == m.end())
                m[a[i]] = b[i];
            else if(m[a[i]]!= b[i])
                return false;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> p;
        for(int i=0;i<words.size();i++){
          if(  solve(words[i] , pattern) && solve(pattern , words[i]) )
                p.push_back(words[i]);
        }
        return p;
    }
    
};