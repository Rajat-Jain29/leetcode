class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> p,q;
        // for(int i=0;i<m;i++)
        //     p.push_back(nums1[i]);
        //  for(int i=0;i<n;i++)
        //     p.push_back(nums2[i]);
        // sort(p.begin(),p.end());
        int i=0,j=0;
        while(i<m && j<n ){
            if( nums1[i] < nums2[j] ){
                p.push_back(nums1[i]);
                i++;
            }
            else if( nums1[i] == nums2[j] ){
                p.push_back(nums1[i]);
                p.push_back(nums2[j]);
                i++;
                j++;
            }
             else if( nums1[i] > nums2[j] ){
                p.push_back(nums2[j]);
                j++;
            }
            
        }     
        while(i<m){
            p.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            p.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        for(int i=0;i<m+n;i++)
            nums1.push_back(p[i]);
        // nums1.insert(p.begin(),p.end());
    }
};