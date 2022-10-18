class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        if(n == 2)
            return "11";
        string s = "11";
        for(int i=3;i<=n;i++){
            string t = "";
            int c = 1;
            for(int j=0;j<s.length();j++){
                if(s[j] == s[j+1])
                    c++;
                else{
                    t += to_string(c) + s[j];
                    c=1;
                }
            }
            s = t;
        }
        return s;
    }
};