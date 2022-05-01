class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> p , q;
        for(int i=0;i<s.length();i++){
            if(s[i] != '#' )
                p.push(s[i]);
            else if(!p.empty())
                p.pop();
        }
        for(int i=0;i<t.length();i++){
            if(t[i] != '#' )
                q.push(t[i]);
           else if(!q.empty())
                q.pop();
        }
        return p==q;
    }
};