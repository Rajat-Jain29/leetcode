class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> phash(26,0);
        vector<int> shash(26,0);
        vector<int> res;
        int left = 0,right = 0;
        
        if(p.length() > s.length())
            return res;
        
        while(right < p.length()){
            phash[ p[right] - 'a' ]++;
            shash[ s[right] - 'a' ]++;
            right++;
        }
        right--;
        while(right < s.length()){
            if(phash == shash)
                res.push_back(left);
            right++;
            if(right != s.length()){
                shash[ s[right] - 'a' ]++;    
            }
            shash[ s[left] - 'a' ]--;
            left++;
        }
            return res;
    }
};