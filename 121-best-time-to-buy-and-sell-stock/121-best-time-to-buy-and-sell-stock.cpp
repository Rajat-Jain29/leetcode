class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp = INT_MAX , maxx  = INT_MIN;
        for(int i=0;i<prices.size();i++){
            temp = min(temp,prices[i]);
            maxx = max(maxx,prices[i] - temp);
        }
        return maxx;
    }
};