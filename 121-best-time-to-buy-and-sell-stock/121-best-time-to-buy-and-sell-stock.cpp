class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = INT_MIN;
        int curr = prices[0];;
        for(int i=0;i<prices.size();i++){
             curr = min(curr,prices[i]);
            mx = max(mx , prices[i] - curr);    
        }
        return mx;
    }
};