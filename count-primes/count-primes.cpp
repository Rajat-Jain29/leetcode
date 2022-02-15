class Solution {
public:
 
    int countPrimes(int n) {
        int k = 0;
        vector<bool> p(n,true);
       for(double i=2;i<n;i++){
               if(p[i]){
                   k++;
                   for(double j=i*i;j<n;j+=i)
                       p[j] = false;
               }
       }
        return k;
    }
};