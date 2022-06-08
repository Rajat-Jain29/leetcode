// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> res;
    void solve(int i,vector<int> &arr, int N, vector<int> &p){
        if(i==N){
           int k = accumulate(p.begin(),p.end(),0);
           res.push_back(k);
           return;
        }
        p.push_back(arr[i]);
        solve(i+1,arr,N,p);
        p.pop_back();
        solve(i+1,arr,N,p);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> p;
        solve(0,arr,N,p);
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends