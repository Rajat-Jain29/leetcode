class FreqStack {
public:
    
    unordered_map<int,int> m;
    priority_queue<pair<int,pair<int,int>>> p;
    int freq = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        p.push( {m[val]++ , { freq++ ,val} } );
    }
    
    int pop() {
        auto val = p.top();
        p.pop();
        int x = val.second.second;
        m[x]--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */