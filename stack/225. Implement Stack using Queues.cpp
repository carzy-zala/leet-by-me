class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size()-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int ans = q.front();
        if(!q.empty()){
            q.pop();
        }
        return ans;
    }
    
    int top() {
        if(!q.empty()){
            return q.front();
        }
        return -1;
    }
    
    bool empty() {
        return q.empty();
    }
};