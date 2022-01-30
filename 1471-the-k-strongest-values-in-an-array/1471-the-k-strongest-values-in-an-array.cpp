class Solution {
public:
    
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end() );
         int n  = arr.size();
       int i=0;
        int  j =n-1;
       
        int m = arr[ (n-1)/2 ];
        vector<int> p;
        while(k--){
            if( m - arr[i] > arr[j] - m )
                i++;
            else
                j--;
        }
        arr.erase(arr.begin()+i , arr.begin()+j+1);
        return arr;
    }
};