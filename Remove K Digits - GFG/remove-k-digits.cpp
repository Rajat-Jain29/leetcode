// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        stack<char> s;
        for(auto it : S){
            
            while(!s.empty() && K>0 && s.top() > it){
                s.pop();
                K--;
            }
            
            if(!s.empty() || it != '0')
                s.push(it);
        }
        while(!s.empty() && K>0){
            s.pop();
            K--;
        }
        
        if(s.empty())
            return "0";
        string res = "";
        while(s.size() > 0){
            res += s.top();
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}
  // } Driver Code Ends