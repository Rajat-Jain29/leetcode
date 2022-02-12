class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> myset;
        bool isPresent = false;
        for(string word : wordList){
            if(endWord.compare(word) == 0)
                isPresent = true;
            myset.insert(word);
        }
        
        if(isPresent == false)
            return 0;
        
        int depth = 0;
        queue<string> q;
        q.push(beginWord);
        while(!q.empty()){
            depth++;
            int lsize = q.size();
            while(lsize--){
                string curr = q.front();
                q.pop();
                for(int j=0;j<curr.length();j++){
                    string temp = curr;
                    for(char z ='a' ; z<='z';z++){
                        temp[j] = z;
                        if(curr== temp)
                            continue;
                        if( temp== endWord )
                            return depth+1;
                        if(myset.find(temp) != myset.end()){
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};