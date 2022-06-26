class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int sum = 0;
        int n = cardPoints.size();
        for(int i=0;i<n;i++)
            sum+=cardPoints[i];
        int win = 0;
        if(n==k)
            return sum;
        for(int i=0;i<n-k-1;i++){
        win += cardPoints[i];
        }
        int res = 0;
        for(int i=n-k-1; i<n;i++){
            win += cardPoints[i];
            res = max(res, sum - win);
            win -= cardPoints[ i - (n-k-1) ];
        }
        return res;
        
    }
};