// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>> dp(n,vector<int>(n+1,0));
        vector<int> prev(n+1,0) , curr(n+1,0);
        for(int i=0;i<=n;i++)
            prev[i] = (i)*price[0];
            
        for(int i=1;i<n;i++){
            for(int j=0;j<=n;j++){
                int no = 0 + prev[j];
                int take = INT_MIN;
                if( (i+1) <= j)
                    take = price[i] + curr[j-(i+1)];
                curr[j] = max(no,take);    
            }
            prev = curr;
        }
        return prev[n];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends