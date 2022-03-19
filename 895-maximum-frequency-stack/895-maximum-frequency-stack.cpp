class FreqStack {
public:
    
    // unordered_map<int,int> m;
    // priority_queue<pair<int,pair<int,int>>> p;
    // int freq = 0;
    unordered_map<int,int> m;
    unordered_map<int,stack<int>> s;
    int freq = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        m[val]++;
        s[m[val]].push(val);
        freq = max(freq,m[val]);
        // p.push( {m[val]++ , { freq++ ,val} } );
    }
    
    int pop() {
        int x = s[freq].top();
        s[freq].pop();
        if(s[freq].size() == 0)
             freq--;
        m[x]--;
       
        // auto val = p.top();
        // p.pop();
        // int x = val.second.second;
        // m[x]--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */