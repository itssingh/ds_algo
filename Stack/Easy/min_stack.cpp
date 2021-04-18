class MinStack
{
public:
    /** initialize your data structure here. */
    vector<int> stack;
    vector<int> min_stack;
    MinStack()
    {
    }

    void push(int x)
    {
        if (!min_stack.empty())
        {
            if (x <= min_stack.back())
                min_stack.push_back(x);
        }
        else
        {
            min_stack.push_back(x);
        }
        stack.push_back(x);
    }

    void pop()
    {
        if (stack.back() == min_stack.back())
        {
            min_stack.pop_back();
        }
        stack.pop_back();
    }

    int top()
    {
        if (!stack.empty())
            return stack.back();
        else
            return -1;
    }
    int getMin()
    {
        if (!min_stack.empty())
            return min_stack.back();
        else
            return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
