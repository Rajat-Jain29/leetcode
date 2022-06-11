class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int target = 0;
        for(auto it : nums)
            target += it;
        target = target - x;
        if(target == 0)
            return n;
        int sum = 0;
        int res = -1;
        
        unordered_map<int,int> m;
        m[0] = -1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if( m.find( sum - target  ) != m.end() ){
                res = max(res,  i-m[sum-target]);
            }
            m[sum] = i;
        }
        return res == -1 ? -1 : n - res;
    }
};