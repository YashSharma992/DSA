class MyStack {
public:
    queue<int>q;
    int size=0;
    MyStack() {
        
    }
    
    void push(int x) {
        queue<int>q2;
        if(size==0){
            q.push(x);
        }
        else{
            while(q.size()){
                q2.push(q.front());
                q.pop();
            }
            q.push(x);
            while(q2.size()){
                q.push(q2.front());
                q2.pop();
            }
        }
        size+=1;
    }
    
    int pop() {
        int ans=q.front();
        q.pop();
        size--;
        return ans;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return size==0;
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