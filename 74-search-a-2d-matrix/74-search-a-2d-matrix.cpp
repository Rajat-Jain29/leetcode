class Solution {
public:
    bool binaryy(vector<int> &m , int k){
        int i=0;
        int j = m.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(m[mid] == k )
                return true;
            else if(m[mid] > k)
                j = mid-1;
            else
                i = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++){
            // if(matrix[i][matrix[0].size()-1] <= target ){
                if(binaryy(matrix[i] , target))
                    return true;
                // else
                //     return false;
            // }
        }
        return false;
    }
};