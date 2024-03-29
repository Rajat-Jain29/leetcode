class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m,p;
        for(int i=0;i<magazine.size();i++)
            m[magazine[i]]++;
        for(int i=0;i<ransomNote.size();i++)
            p[ransomNote[i]]++;
        for(int i=0;i<ransomNote.size();i++){
            if( p[ ransomNote[i] ] > m[ ransomNote[i] ] )
                return false;
        }
        return true;
    }
};