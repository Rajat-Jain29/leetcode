class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int k = find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            int maxx = -1;
            for(int j= k;j<nums2.size();j++ ){
                if(nums2[j] > nums2[k]){
                    maxx = nums2[j];
                    break;
                }
            }
            res.push_back(maxx);
            
            
        }
        return res;
    }
};