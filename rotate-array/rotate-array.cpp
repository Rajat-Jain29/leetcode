class Solution {
public:
    void solve(int i,int j,vector<int>& nums ){
        while(i < j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        solve(0,n-k-1,nums);
        solve(n-k,n-1,nums);
        solve(0,n-1,nums);
    }
};