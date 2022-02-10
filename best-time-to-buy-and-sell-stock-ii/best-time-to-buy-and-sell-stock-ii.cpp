class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit = 0;
        int sd=0,bd=0;
        
        for(int i=1;i<prices.size();i++){
                if(prices[i] >= prices[i-1]){
                    sd++;
                }
                else{
                    profit += prices[sd]-prices[bd];
                    sd=i;
                    bd=i;
            }
        }
        profit += prices[sd]-prices[bd];
        return profit;
        
    }
};