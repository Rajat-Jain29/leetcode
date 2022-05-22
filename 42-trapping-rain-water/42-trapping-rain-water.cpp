class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int h = height.size()-1;
        int maxleft = 0;
        int maxright = 0;
        int res = 0;
        while(l<=h){
            if(height[l] <= height[h]){
                if(height[l] >= maxleft)
                    maxleft = height[l];
                else{
                    res += maxleft-height[l];
                }
                l++;
            }
            else{
                if(height[h] >= maxright)
                    maxright = height[h];
                else{
                    res += maxright-height[h];
                }
                h--;
            }
        }
        return res;
    }
};