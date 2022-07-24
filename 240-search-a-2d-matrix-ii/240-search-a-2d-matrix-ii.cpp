class Solution {
public:
    bool binarysearch(vector<int>& matrix, int target){
        int s = matrix.size();
        int i = 0;
        int j = matrix.size() -1;
        while(i <= j){
            int m = (i+j)/2;
            if( matrix[m] == target )
                return true;
            else if (matrix[m] > target ){
                 j = m-1;
            }
            else{
                i = m+1;
            }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        for(int i=0;i<m;i++){
            if( binarysearch(matrix[i] ,  target) )
                return true;
        }
        return false;
            
    }
};