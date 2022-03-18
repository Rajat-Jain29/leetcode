class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> map;
        for(auto ch : s)
        {
            map[ch]++;
        }
        
        string result = "";
        vector<bool> inRes(26, false);
        for(int i = 0 ; i < s.length(); i++)
        {
           
                   map[s[i ]]--;
                  
            
                if(inRes[s[i]-'a']) continue;
                while(result.empty() == false && result.back() > s[i] && map[result.back()] >= 1)
                {
                    inRes[result.back()-'a'] = false;
                    result.pop_back();
                    
                }
                result.push_back(s[i]);
                inRes[s[i]-'a'] = true;
               
        }
        
        return result;
    }
};