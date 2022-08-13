class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++)
            m[words[i]]++;
        int total=words.size();
        int len = words[0].size();
        vector<int> res={};
         if (s.length() == 0 || total == 0) return res;
        for(int i=0;i<(s.length() - total*len)+1;i++){
            unordered_map<string,int> seen;
            int j =0;
            for(;j<total;j++){
                int ind = i+j*len;
                string word = s.substr(ind,len);
                if( m.find(word) != m.end()  ){
                    seen[word]++;
                    if(seen[word] > m[word] )
                        break; 
                }
                else
                    break;
            }
            if( j == total)
                res.push_back(i);
        }
        return res;
    }
};