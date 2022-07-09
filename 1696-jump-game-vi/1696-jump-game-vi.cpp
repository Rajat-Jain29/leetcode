class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> p;
        p.push({nums[0] , 0});
        int ms = nums[0];
        for(int i=1;i<nums.size();i++){
            while( (i-p.top().second) > k )
                p.pop();
            ms = p.top().first + nums[i];
            p.push({ms,i});
           
        }
        return ms;
    }
};