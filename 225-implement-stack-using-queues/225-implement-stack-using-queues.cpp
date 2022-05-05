class MyStack {
public:
    queue<int> p;
    deque<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        p.push(x);
        q.push_front(x);
    }
    
    int pop() {
        int k = q.front();
        q.pop_front();
        return k;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */