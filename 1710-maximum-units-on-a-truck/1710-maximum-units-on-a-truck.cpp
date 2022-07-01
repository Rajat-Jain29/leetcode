class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        priority_queue<pair<int,int>> q;
        
        for(int i=0;i<boxTypes.size();i++){
              q.push( { boxTypes[i][1] , boxTypes[i][0] } );
        }
        int sum = 0 , res = 0;
        while(!q.empty()){
            sum += q.top().second;
            int x = min(q.top().second,truckSize);
            res += (q.top().first * x );
            q.pop();
            truckSize -= x;
            if(truckSize == 0)
                return res;
        }
        return res;
    }
};