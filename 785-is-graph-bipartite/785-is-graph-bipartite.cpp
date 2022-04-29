class Solution {
public:
    
    bool bipartite(int i,vector<vector<int>>& graph, vector<int> &vis){
        if(vis[i] == -1)
            vis[i] = 1;
        for(auto it : graph[i]){
            if(vis[it] == -1){
            vis[it] = 1-vis[i];
            if( !bipartite(it,graph,vis) )
                    return false;
            }
            else if(vis[it] == vis[i])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n  = graph.size();
      
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i] == -1){
                if( !bipartite(i,graph,vis) )
                    return false;
            }
        }
        return true;
    }
};