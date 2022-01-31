class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      
        
        int res = 0;
     for(int i=0;i<arr.size();i++){
         int sum = 1;
        while(sum+i <= arr.size() ){
            for(int j = i;j<i+sum;j++){
                res += arr[j];
            }
            sum += 2;
        }
     }
        return res;
    }
};