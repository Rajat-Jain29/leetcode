class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int> m;
        // for(int i=0;i<nums.size();i++)
        //     m[nums[i]]++;
        // for(auto it : m){
        //     if(it.second >= 2)
        //         return it.first;
        // }
        // return 0;
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast=nums[fast];
        }
        return slow;
            
    }
};