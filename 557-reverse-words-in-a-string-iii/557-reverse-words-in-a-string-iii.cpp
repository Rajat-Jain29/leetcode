class Solution {
public:
    string reverseWords(string s) {
        string cnt = "";
        int i = 0;
        while(i<s.length()){
            string res = "";
            while(s[i] != ' ' && i<s.length() ){
                res += s[i];
                i++;
            }
            i++;
            reverse(res.begin(),res.end());
            cnt += res + " ";
        }
        return cnt.substr(0,cnt.length()-1);
    }
};