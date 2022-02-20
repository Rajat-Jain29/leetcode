class Solution {
public:
    static bool comp(vector<int> &A,vector<int> &B){
        if(A[0] == B[0]){
            return A[1] > B[1];
        }
        return A[0]<B[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& nums) {
       
        sort(nums.begin() , nums.end() ,comp  );
        int count = 0;
        int s = nums[0][0];
        int e = nums[0][1];
        for(int i=1;i<nums.size();i++){
            if(nums[i][0] >= s && nums[i][1] <= e )
                continue;
            else{
                s = min(s,nums[i][0]);
                e = max(e,nums[i][1]);
                count++;
            }
        }
        return count+1;
       
    }
};