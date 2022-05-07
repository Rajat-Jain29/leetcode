class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n  = nums.size();
        vector<int> p(n);
        p[0] = nums[0];
        for(int i=1;i<n;i++)
            p[i] = min(nums[i] , p[i-1]);
        stack<int> s;
        for(int j=n-1;j>=0;j--){
            if(nums[j] > p[j]){
                while(!s.empty() && s.top() <= p[j] )
                    s.pop();
                if(!s.empty() && s.top() < nums[j] )
                    return true;
                s.push(nums[j]);
            }
        }
        return false;
    }
};