class Solution {
    vector<int> arr;
    int n;
public:
    Solution(vector<int>& nums) {
        arr = nums;
        n = arr.size();
    }
    
    vector<int> reset() {
        return arr;
    }
    
    vector<int> shuffle() {
        vector<int> arr2 = arr;
        random_shuffle(arr2.begin(),arr2.end());
        return arr2;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */