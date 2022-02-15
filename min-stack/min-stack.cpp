class MinStack {
public:
     vector<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
       st.push_back(val);
    }
    
    void pop() {
        vector<int> q;
        for(int i=0;i<st.size()-1;i++)
            q.push_back(st[i]);
        st.erase(st.begin(),st.end());
        st = q;
    }
    
    int top() {
       return st[st.size()-1];
    }
    
    int getMin() {
        return *min_element(st.begin(),st.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */