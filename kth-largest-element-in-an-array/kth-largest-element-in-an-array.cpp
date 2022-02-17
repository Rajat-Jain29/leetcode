class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> m;
        for(int i=0;i<nums.size();i++){
            m.push(nums[i]);
            if(m.size() > k)
                m.pop();
        }
        return m.top();
    }
};