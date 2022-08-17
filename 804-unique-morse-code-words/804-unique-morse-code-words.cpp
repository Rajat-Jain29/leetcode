class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> p;
        for(int i=0;i<words.size();i++){
            string res = "";
            for(int j=0;j<words[i].size();j++){
                res += s[words[i][j] - 'a'];
            }
            p.insert(res);
        }
        return p.size();
    }
};