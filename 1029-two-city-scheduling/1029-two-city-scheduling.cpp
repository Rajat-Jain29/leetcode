class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
      int n = costs.size()/2;
        vector<int> res;
        priority_queue< pair<int,vector<int> > > q;
        for(int i=0;i<costs.size();i++){
            q.push( {costs[i][1] - costs[i][0] , costs[i]}  );
        //    res.push_back( costs[i][1] - costs[i][0] );
        }
        int sum = 0;
        while(q.size() > n){
            vector<int> p =  q.top().second;
            sum += p[0];
            q.pop();
        }
        while(q.size() > 0){
            vector<int> p =  q.top().second;
            sum += p[1];
            q.pop();
        }
        
        return sum;
    }
};