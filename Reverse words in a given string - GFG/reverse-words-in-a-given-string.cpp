// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string res="";
        string k = "";
        for(int i=s.length()-1;i>=0;i--){
            
            if(s[i] == '.'){
                reverse(res.begin(),res.end());
                k += res;
                res="";
                k += ".";
                i--;
            }
            res += s[i];   
        }
        for(int i=0;i<s.length();i++){
            if(s[i] == '.')
                break;
            k += s[i];
        }
        
        return k;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends