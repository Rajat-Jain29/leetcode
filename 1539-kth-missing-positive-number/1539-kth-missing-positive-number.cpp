class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int r = 0;
    for(int i=1; i<=nums.size()+k;i++ ){
        if( find( nums.begin(),nums.end() ,i ) == nums.end() ){
            r++;
            if(r == k)
                return i;
        }
    }
    
    return 0;
    }
};