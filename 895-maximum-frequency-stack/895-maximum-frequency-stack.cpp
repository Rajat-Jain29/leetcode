class FreqStack {
public:
    
    unordered_map<int,int> m;
    unordered_map<int,stack<int>> s;
    priority_queue<pair<int,pair<int,int>>> p;
    int freq = 0;
    FreqStack() {
        
        
    }
    
    void push(int val) {
        p.push( {m[val]++ , { freq++ ,val} } );
        // freq = max(freq,m[val]++);
        // s[m[val]].push(val);
    }
    
    int pop() {
        auto val = p.top();
        p.pop();
        int x = val.second.second;
        m[x]--;
        return x;
        // int x = s[freq].top();
        // s[freq].pop();
        // if( s[m[x]--].size() > 0)
        //     freq--;
        // return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */