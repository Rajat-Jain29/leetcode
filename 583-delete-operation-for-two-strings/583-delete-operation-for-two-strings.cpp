class Solution {
public:
    int lcs(string w1,string w2){
        
        int t[w1.length()+1][w2.length()+1];
        for(int i=0;i<w1.length()+1;i++){
            for(int j=0;j<w2.length()+1;j++){
            if(i==0 || j==0)
                t[i][j] = 0;
        }
        }
        
        for(int i=1;i<w1.length()+1;i++){
              for(int j=1;j<w2.length()+1;j++){
                  if(w1[i-1] == w2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                  }
                  else{
                      t[i][j] = max(t[i-1][j] , t[i][j-1]);
                  }
            
        }
        }
        return t[w1.length()][w2.length()];
    }
    int minDistance(string word1, string word2) {
        int l = lcs(word1,word2);
        int m = word1.length();
        int n = word2.length();
        
        return m - l + n - l;
    }
};