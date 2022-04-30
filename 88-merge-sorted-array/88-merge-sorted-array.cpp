class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> p,q;
        for(int i=0;i<m;i++)
            p.push_back(nums1[i]);
        for(int j=0;j<n;j++){
            q.push_back(nums2[j]);
        }
        nums1.clear();
        for(int i=0;i<m;i++)
            nums1.push_back(p[i]);
        for(int j=0;j<n;j++)
            nums1.push_back(q[j]);
        sort(nums1.begin(),nums1.end());
    }
};