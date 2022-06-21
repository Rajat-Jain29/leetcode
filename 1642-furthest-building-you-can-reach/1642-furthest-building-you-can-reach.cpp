class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> p;
        int i=0;
        int n = heights.size();
        while(i < n-1 && bricks >= 0){
            if(heights[i] < heights[i+1]){
                p.push( heights[i+1] - heights[i] );
                bricks -= (heights[i+1] - heights[i]) ;
            }
            
            while( bricks < 0 && ladders){
                ladders--;
                 bricks += p.top();
                p.pop();
            }
            if(bricks >= 0)
                 i++;
        }
        return i;
    }
};