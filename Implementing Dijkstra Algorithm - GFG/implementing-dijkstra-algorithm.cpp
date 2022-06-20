// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector <int> k;
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > p;
        // dist,node
        vector<int> dist(V,INT_MAX);
        p.push({0,S});
        dist[S] = 0;
        while(!p.empty()){
            int prevd = p.top().first;
            int prev = p.top().second;
            p.pop();
          
		    for( auto it : adj[prev] ){ // adj list hai ... first is node second is weight;
                int neww = it[0];
                int newDist = it[1];
                if( dist[neww] > prevd + newDist ){
                    dist[neww] = prevd + newDist;
                    p.push({ dist[neww] , neww });
                }
            }
        }
        return dist;
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends