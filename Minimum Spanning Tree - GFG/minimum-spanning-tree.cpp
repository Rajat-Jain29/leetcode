// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int keyset[V];
        int parent[V];
        bool mset[V];
        for(int i=0;i<V;i++){
            keyset[i] = INT_MAX;
            mset[i] = false;
        }
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>  > p;
        p.push({0,0});
        keyset[0] = 0;
        parent[0] = -1;
       while(!p.empty()){
            int u = p.top().second;
            p.pop();
            mset[u] = true;
            for(auto it : adj[u]){
                int v = it[0];
                int wt = it[1];
                if( mset[v] == false && wt < keyset[v] ){
                    keyset[v] = wt;
                    parent[v] = u;
                    p.push({ keyset[v] , v});
                }
            }
        }
        int sum = 0;
        for(int i=0;i<V;i++)
            sum += keyset[i];
        return sum;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends