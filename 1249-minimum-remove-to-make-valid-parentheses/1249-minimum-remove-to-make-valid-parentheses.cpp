class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(')
                cnt++;
            else if(s[i] == ')'){
                if(cnt > 0)
                    cnt--;
                else
                    s[i] = '0';
            }
        }
        cnt = 0;
        
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == ')')
                cnt++;
            else if(s[i] == '('){
                if(cnt > 0)
                    cnt--;
                else
                    s[i] = '0';
            }
        }
        string res = "";
        for(auto c : s){
            if(c!='0')
                res+=c;
        }
        return res;
        
    }
};