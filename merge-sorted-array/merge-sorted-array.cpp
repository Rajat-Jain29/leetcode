class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> p,q;
       for(int i=0;i<m;i++)
           p.push_back(nums1[i]);
        
       for(int i=0;i<n;i++)
           q.push_back(nums2[i]);
        
        vector<int> r;
        nums1.erase(nums1.begin(),nums1.end());
        nums2.erase(nums2.begin(),nums2.end());
        for(int i=0;i<m;i++)
            nums1.push_back(p[i]);
        for(int i=0;i<n;i++)
            nums1.push_back(q[i]);
        sort(nums1.begin(),nums1.end());    
        // return r;
        
        
        
        
    }
};