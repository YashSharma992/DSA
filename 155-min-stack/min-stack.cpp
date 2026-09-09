class MinStack {
public:
    stack<int>st;
    stack<int>mi;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(mi.empty())
        mi.push(value);
        else
        mi.push(min(mi.top(),value));
    }
    
    void pop() {
        st.pop();
        mi.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mi.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */