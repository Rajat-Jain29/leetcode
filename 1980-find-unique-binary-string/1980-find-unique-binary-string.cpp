class Solution {
public:
    string ans = "" ; 
    bool flag = false;
    void fun(string &s,vector<string> &nums){
        if(s.length() == nums.size()){
            if( find(nums.begin(),nums.end(),s ) == nums.end()){
                ans = s;
                flag = true;
            }
            return ;
        }
        
        if(!flag){
            s += "0";
            fun(s,nums);
            s.pop_back();
            s += "1";
            fun(s,nums);
            s.pop_back();
        }
        
    }


string findDifferentBinaryString(vector<string> &nums) {
    string s = "";
    fun(s,nums);
    return ans;
}
        
    
};