class KthLargest {
public:
    priority_queue<int, vector<int> , greater<int> > q;
    int x = 0;
    KthLargest(int k, vector<int>& nums) {
        x = k;
        for(int i=0;i<nums.size();i++)
            q.push(nums[i]);
    }
    
    int add(int val) {
        q.push(val);
        while(q.size() > x){
            q.pop();
        }
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */