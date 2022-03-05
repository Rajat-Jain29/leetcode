class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        int ma = *max_element(nums.begin(),nums.end()); 
       vector<int> dp(10001);
        dp[0] = m[0];
        dp[1] = m[1];
        for(int i=2;i<=ma;i++){
            dp[i] = max( m[i] * i + dp[i-2] , dp[i-1]  );
        }
        return dp[ma];
    }
};