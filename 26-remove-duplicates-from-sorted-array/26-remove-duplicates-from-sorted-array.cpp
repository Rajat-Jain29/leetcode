class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i:nums)
            s.insert(i);
        int k  = s.size();
        int g = 0;
        for(int i: s){
            nums[g]=i;
            g++;
        }
        return s.size();
    }
};