class Solution {
public:
    unordered_map<char,int> mapp(string &s){
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        return m;
    }
    bool check(unordered_map<char,int> &m , string s, unordered_map<char,int> &p , string q){
        for(int i=0;i<s.length();i++){
            if(p.find(s[i]) != p.end())
                return false;
        }
        // for(int i=0;i<q.length();i++){
        //     if(p.find(q[i]) != p.end())
        //         return false;
        // }
        return true;
    }
    int maxProduct(vector<string>& words) {
        int n = size(words), ans = 0;
	vector<int> mask(n);
	for(int i = 0; i < n; i++) {
		for(auto& ch : words[i])           
			mask[i] |= 1 << (ch - 'a');     // hash the word
		for(int j = 0; j < i; j++)
			if((mask[i] & mask[j]) == 0)    // no common set bit in the hash of words[i] and words[j]
				ans = max(ans, int(size(words[i]) * size(words[j])));
	}   
	return ans;
    }
};