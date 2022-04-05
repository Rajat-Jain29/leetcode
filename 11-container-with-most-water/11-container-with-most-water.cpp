class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0;
        int r= height.size()-1;
        int w=0;
        while(l<=r){
            w = max(w , min(height[l],height[r])*(r-l));
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return w;
    }
};