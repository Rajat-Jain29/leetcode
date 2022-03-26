class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<long double> p;
       for(long double n : nums1)
           p.push_back(n);
        for(long double n : nums2)
           p.push_back(n);
        sort(p.begin(),p.end());
        long double sum = 0;
        if(p.size() % 2 != 0){
            return p[p.size()/2];
        }
        else{
            sum = p[p.size()/2 - 1 ] + p[p.size()/2  ];
            return sum / 2;
        }
        // for(long double x : p)
        //     sum += x;
        // return sum / p.size();
            
    }
};