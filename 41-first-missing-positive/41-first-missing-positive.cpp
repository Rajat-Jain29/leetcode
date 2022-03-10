
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]] = i;
        for(int i=1;i<=nums.size();i++){
            if(m.find(i) == m.end())
                return i;
        }
       return m.size()+1; 
        
//     int n = nums.size();
        
//      for(int i=0;i<n;i++){
//          while(nums[i] > 0 && nums[i] <= n &&  nums[nums[i] - 1] != nums[i])
//              swap(nums[i] , nums[nums[i] - 1]);
//      }   
//       for(int i=0;i<n;i++){
//           if(nums[i] != i+1)
//               return i+1;
//       }  
//         return n+1;
        
    }
};