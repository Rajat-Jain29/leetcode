class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mx = INT_MIN, temp = INT_MAX;
        for(int i=0;i<prices.size();i++){
            int temp = min(temp,prices[i]);
            mx = max(mx,prices[i] - temp);
        }
        return mx;
    }
};