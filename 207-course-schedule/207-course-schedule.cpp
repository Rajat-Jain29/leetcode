class Solution {
public:
    bool dfs( vector<int> &vis ,  vector<int> &dfsvis,int i,vector<int> adj[]){
        vis[i] = 1;
        dfsvis[i] = 1;
        for(auto it : adj[i]){
            if(vis[it] == 0){
                if(dfs(vis,dfsvis,it,adj))
                    return true;
            }
            else if(dfsvis[it])
                return true;
        }
        dfsvis[i] = 0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(int i=0;i<prerequisites.size();i++)
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        
        vector<int> vis(numCourses,0);
        vector<int> dfsvis(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(vis[i] == 0){
                if(dfs(vis,dfsvis,i,adj))
                    return false;
            }
        }
        return true;
    }
};