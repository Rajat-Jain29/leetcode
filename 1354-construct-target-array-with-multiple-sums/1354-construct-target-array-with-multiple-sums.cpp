class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> q;
        long sum= 0;
        for(int i=0;i<target.size();i++){
            sum += target[i];
            q.push(target[i]);
        }
        while(!q.empty()){
            int x = q.top();
            q.pop();
            sum -= x;
            if(x==1 || sum == 1)
                return true;
            if( x<sum || sum ==0 || x%sum==0 )
                return false;
            x =  x%sum;
            sum += x;
            q.push(x);
        }
        return true;
    }
};