class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int> >>  adj(n+1);
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
        vector<int> dist(n+1 , INT_MAX);
        dist[k] = 0; 
        pq.push({dist[k],k});
        while( !pq.empty() ){
            int prev_dist = pq.top().first;
            int prev_node = pq.top().second;
            pq.pop();
            for(auto it : adj[prev_node]){
                int new_node = it.first;
                int new_dist = it.second;
                if( dist[new_node] > new_dist + dist[prev_node] ){
                    dist[new_node] = new_dist + dist[prev_node];
                    pq.push({dist[new_node] , new_node});
                }
            }
        }
        int x = *max_element(dist.begin()+1,dist.end());
        return x == INT_MAX ? -1 : x;
        
    }
};