class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        int f = 1;
        vector<int> nums;
        for(int i=1;i<n;i++){
            f = f*i;
            nums.push_back(i);
        }
        nums.push_back(n);
        k= k-1;
        while(true){
            s += to_string( nums[k/f] );
            nums.erase(nums.begin() + k/f);
            if(nums.size() == 0)
                break;
            k = k%f;
            f = f/nums.size();
        }
        return s;
    }
};