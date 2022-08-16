class Solution {
public:
    vector<int> adj[100000];
    vector<vector<int>> ans;
    void solve(int src,int n, vector<vector<int>>& graph,vector<int> &res){
        if(src == n-1){
            ans.push_back(res);
            return ;
        }
        for(auto it : graph[src]){
            res.push_back(it);
            solve(it,n,graph,res);
            res.pop_back();
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int> res;
        res.push_back(0);
        solve(0,n,graph,res);
        return ans;
    }
};