class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n = cardPoints.size(), lSum = 0;
        for(int i = 0; i < k; ++i){
            lSum += cardPoints[i];
        }
        int maxx = lSum;
        for(int rSum = 0, i = 0; i < k; ++i){
            rSum += cardPoints[n-1-i];
            lSum -= cardPoints[k-1-i];
            maxx = max(maxx,lSum+rSum);
        }
        return maxx;
    }
};