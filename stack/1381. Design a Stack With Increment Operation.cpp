class CustomStack {
    int* a;
    int top;
    int max;
public:
    CustomStack(int maxSize) {
        a= new int[maxSize];
        top = -1;
        max = maxSize;
    }
    
    void push(int x) {
        if(top<max-1){
            top++;
            a[top] = x;
        }

        
    }
    
    int pop() {
        if(top>-1){
            int ans = a[top];
            top--;
            return ans;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int size = k;
        if(top<k){
            k = top + 1;
        }
        
        for(int i=0;i<k;i++)
        {
            a[i]= a[i] + val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */