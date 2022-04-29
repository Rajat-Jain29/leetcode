class Solution {
public:
    static const int N = 1e5+1;
    vector<int> adj[N];
    bool vis[N];
    void dfs(int i,string &s,vector<int> &index,vector<char> &c){
        index.push_back(i);
        c.push_back(s[i]);
        vis[i] = true;
        for(auto it: adj[i]){
            if(!vis[it])
                dfs(it,s,index,c);
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
       for(auto it : pairs){
           int src=it[0];
           int dest=it[1];
           
           adj[src].push_back(dest);
           adj[dest].push_back(src);
       }
       for(int i=0;i<s.length();i++){
           if(!vis[i]){
               vector<int> index;
               vector<char> c;
               dfs(i,s,index,c);
               sort(index.begin(),index.end());
               sort(c.begin(),c.end());
               
               for(int j=0;j<c.size();j++)
                   s[index[j]] = c[j];
           }
           
           
       } 
        return s;
    }
};