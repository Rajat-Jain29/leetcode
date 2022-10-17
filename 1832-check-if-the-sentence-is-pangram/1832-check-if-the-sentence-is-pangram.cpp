class Solution {
public:
    bool checkIfPangram(string sentence) {
   
    for(int i=0;i<26;i++){
        char c = 'a' + i;
        if( sentence.find(c) == -1 )
            return false;
    }
       return true;
    }
};