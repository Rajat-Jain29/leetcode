class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> q;
        int minn = INT_MAX;
        for(int i : nums){
            if(i%2 == 1)
                i = i*2;
            minn = min(minn,i);
            q.push(i);
        }
        int diff = INT_MAX;
        while(q.top() % 2 == 0){
            int k  = q.top();
            q.pop();
            diff = min(diff,  k - minn );
            minn = min(minn, k /2);
            q.push(k/2);   
        }
        return min(diff , q.top() - minn);
    }
};