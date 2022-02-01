class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int curr = INT_MAX;
        for(int i=0;i<prices.size();i++){
             curr = min(curr,prices[i]);
            mx = max(mx , prices[i] - curr);    
        }
        return mx;
    }
};