//双栈解决，一个栈存数，另一个栈存当前最小值
```c
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stk, stk_min;
    MinStack() {
        
    }//构造函数，初始化，考察的是前缀和
    
    void push(int x) {
        stk.push(x);
        if(stk_min.empty())   stk_min.push(x);
        else    stk_min.push(min(x,stk_min.top()));
    }
    
    void pop() {
        stk.pop();
        stk_min.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return stk_min.top();
    }
};
```
