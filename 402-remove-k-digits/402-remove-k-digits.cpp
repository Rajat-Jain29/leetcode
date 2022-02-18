class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        for(auto i : num){
            
            while(!s.empty() && k>0 && s.top() > i){
                s.pop();
                k--;
            }
            
            if(!s.empty() || i != '0')
                s.push(i);
            
        }
        
        while(!s.empty() && k>0){
            s.pop();
            k--;
        }
        
        if(s.empty())
            return "0";
        
        string res = "";
        while(s.size() > 0){
            res += s.top();
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};