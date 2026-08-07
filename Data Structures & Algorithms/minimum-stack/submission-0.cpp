/*
Bruteforce(find min by traverse) : O(N)
How to keep every min val all the time?
1. separate stack, pushing minval all the time? 
push = push *2
=> 최솟값 stack을 만든다.
pop == pop*2
-> 
top == top
getMin == top
*/

class MinStack {
public:
    // 2^31 = 1024^3 ~= 10^9
    stack<int> st;
    stack<int> min_stack;
    
    MinStack() {
        min_stack.push(pow(2,31) - 1);
    }
    
    void push(int val) {
        st.push(val);
        
        if (val < min_stack.top()) {
            min_stack.push(val);    
        } else {
            min_stack.push(min_stack.top());
        }
        
        return;
    }
    
    void pop() {
        st.pop();
        min_stack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
