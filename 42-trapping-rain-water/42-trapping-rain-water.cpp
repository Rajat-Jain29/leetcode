class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int h = height.size()-1;
        int res = 0,left = 0,right=0;
        while(l <= h ){
            if(height[l] <= height[h]){
                left = max(left,height[l]);
                res += left-height[l];
                l++;
            }
            else{
                right = max(right,height[h]);
                res += right-height[h];
                h--;
            }
        }
        return res;
    }
};