class Solution {
public:
    bool binary(vector<int> &nums,int t){
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int m = (i+j)/2;
            if(nums[m] == t)
                return true;
            else if(nums[m] > t)
                j = m-1;
            else
                i = m+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n  = matrix[0].size();
      for(int i=0;i<m;i++){
          if(matrix[i][n-1] >= target){
              if(binary(matrix[i] ,  target))
                  return true;
          }
      }
        return false;
    }
};