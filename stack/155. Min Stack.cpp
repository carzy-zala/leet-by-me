 class MinStack {
    stack<int> ans;
    int min = INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        ans.push(val);
        if(min>val){
           min = val;
        }
    }
    
    void pop() {
        ans.pop();
    }
    
    int top() {
        return ans.top();
    }
    
    int getMin() {
        stack<int> temp = ans;
        int min = INT_MAX;
        while(!temp.empty()){
             
             if(temp.top()<min){
                 min = temp.top();
             }
             temp.pop();
        }

        return min;
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