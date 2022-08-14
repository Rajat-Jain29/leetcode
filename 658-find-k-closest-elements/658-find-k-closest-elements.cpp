class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<arr.size();i++){
            q.push( {abs(arr[i] - x) , arr[i]} );
            
            if(q.size() > k)
                q.pop();
        }
        vector<int> p;
        while(q.size() > 0){
            p.push_back(q.top().second);
            q.pop();
        }
        sort(p.begin(),p.end());
        return p;
        
    }
};