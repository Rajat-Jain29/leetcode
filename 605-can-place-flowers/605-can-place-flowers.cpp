class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        vector<int> p;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                p.push_back(i-1);
                p.push_back(i+1);
            }
        }
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0 &&  (find(p.begin(),p.end(),i)==p.end()) ){
                k++;
                p.push_back(i-1);
                p.push_back(i+1);
            }
                
        }
        return k>=n;
        
        
    }
};