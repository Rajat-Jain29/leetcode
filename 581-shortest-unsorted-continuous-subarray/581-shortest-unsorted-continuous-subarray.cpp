class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(),arr.end());
        int s = nums.size();
        int e = 0;
        for(int i=0;i<nums.size();i++){
            if(arr[i] != nums[i]){
                s = min(s,i);
                e = max(e,i);
            }
        }
        return e-s >= 0 ? e-s+1 : 0;
    }
};