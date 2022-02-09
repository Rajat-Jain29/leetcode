class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int f = 0;
       for(int i=n-1;i>=0;i--){
           if(digits[i] < 9){
               digits[i] = digits[i] +1;
               f = 1;
               break;
           }
           else{
               digits[i] = 0;
           }
               
       }
        if(f == 0){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};