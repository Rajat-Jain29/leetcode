class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(int n:stones)
            p.push(n);
        while(p.size() > 1){
            int x = p.top();
            p.pop();
            int y = p.top();
            p.pop();
            if(x-y > 0)
                p.push(x-y);
        }
        return p.size() == 0 ? 0 : p.top();
    }
};