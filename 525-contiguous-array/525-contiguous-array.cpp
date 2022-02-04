class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        int count = 0;
        int mx = 0;
        m[0] = -1;
        for(int i=0;i<n;i++){
            if(nums[i] == 0)
                count += -1;
            else
                count += 1;
            
            if(m.find(count) != m.end()){
                mx = max(mx , i - m[count]);
            }
            else{
                m[count] = i;
            }
            
        }
        return mx;
    }
};