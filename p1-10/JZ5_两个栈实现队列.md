//考察数据结构栈和队列，栈先进后出，队列先进先出，直接用c++STL
```c++
class Solution
{
public:
    void push(int node) {
      while(!st2.empty()){
          st1.push(st2.top());
          st2.pop();
      }
        st1.push(node);
    }
 
    int pop() {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int res=st2.top();
        st2.pop();
        return res;
    }
 
private:
    stack<int> st1;
    stack<int> st2;
};
//另外一种
class Solution
{
public:
    void push(int node) {
        st1.push(node);
    }
 
    int pop() {
        int t;
        if(st2.empty())
           while(!st1.empty()){
               t=st1.top();st1.pop();
               st2.push(t);
            }
        t=st2.top();
        st2.pop();
        return t;
    }
 
private:
    stack<int> st1;
    stack<int> st2;
};
```
