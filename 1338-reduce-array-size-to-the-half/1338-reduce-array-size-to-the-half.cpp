class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n =  arr.size()/2;
        unordered_map<int,int> m;
        for(auto it : arr)
            m[it]++;
        priority_queue<int> q;
        for(auto it : m){
            q.push(it.second);
        }
        int res = 0;
        int  k = 1;
        while(q.size() > 0){
            res += q.top();
            if(res >= n ){
                break;
            }
            else{
                k++;
            }
            q.pop();
        }
        return k;
    }
};