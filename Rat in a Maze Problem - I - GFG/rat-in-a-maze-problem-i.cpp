// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string> p;
    void dfs(int i,int j, vector<vector<int>> &m, vector<vector<int>> &vis,string h,int n ){
        if(i<0 || i>=n || j<0 || j>=n || vis[i][j] == 1 || m[i][j] == 0 )
            return ;
        if(i == n-1 && j == n-1 ){
            p.push_back(h);
            return;
        }
        vis[i][j] = 1;
        dfs(i-1, j , m,vis,h+'U',n);
        dfs(i, j+1, m,vis,h+'R',n);
        dfs(i+1, j , m,vis,h+'D',n);
        dfs(i, j-1 , m,vis,h+'L',n);
        vis[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
       
        vector<vector<int>> vis(n,vector<int>(n,0));
        dfs(0,0,m,vis,"",n);
        return p;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends