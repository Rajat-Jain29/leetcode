class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
       int n = points.size();
        int i=0,res=0,cn=1;
        vector<bool> vis(n);
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>  > pq;
        while(cn<n){
            vis[i] = true;
            for(int j=0;j<n;j++){
                pq.push( { abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]) , j} );
            }
            while(vis[pq.top().second])
                pq.pop();
            res += pq.top().first;
            i = pq.top().second;
            pq.pop();
            cn++;
        }
        return res;
    }
};