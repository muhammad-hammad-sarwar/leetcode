class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
    }
    
    void push(int value) {
        st.push(value);
        if(minSt.empty() || minSt.top() > value) {
            minSt.push(value);
            return;
        }

        minSt.push(minSt.top());
    }
    
    void pop() {
        if(st.empty()) return;
        st.pop();
        minSt.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top(); 
    }
    
    int getMin() {
        return minSt.top();
    }
};

/**
 * Your MinStStack object will be instantiated and called as such:
 * MinStStack* obj = new MinStStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMinSt();
 */