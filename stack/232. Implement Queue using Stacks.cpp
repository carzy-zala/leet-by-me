class MyQueue
{
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue()
    {
        s1 = stack<int>();
        s2 = stack<int>();
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s2.top();
        s2.pop();

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }

    int peek()
    {
        stack<int> f;

        while (!s1.empty())
        {
            f.push(s1.top());
            s1.pop();
        }

        int ans = f.top();

        while (!f.empty())
        {
            s1.push(f.top());
            f.pop();
        }
        return ans;
    }

    bool empty()
    {
        if (s1.size() == 0)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */