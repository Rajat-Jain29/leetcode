class WordDictionary {
public:
    bool isEqual(string w1,string w2){
        for(int i=0;i<w1.length();i++){
            if(w2[i] =='.')
                continue;
            if(w1[i] != w2[i])
                return false;
        }
        return true;
    }
    unordered_map<int,vector<string>> m;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
       m[word.size()].push_back(word);
    }
    
    bool search(string word) {
        
       for(auto it : m[word.size()]){
           if(isEqual(it,word))
               return true;
       }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */