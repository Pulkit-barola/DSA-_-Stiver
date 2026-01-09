/* Implement a Min Stack using a single stack with pairs  Which is Brute Force*/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
    stack<pair<int, int>> st;
public: 
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if(st.empty()) {
            st.push({x, x});
        } else {
            int currentMin = st.top().second;
            st.push({x, min(x, currentMin)});
        }
    }
    
    void pop() {
        if(!st.empty()) {
            st.pop();
        }
    }
    
    int top() {
        if(!st.empty()) {
            return st.top().first;
        }
        return -1; // or throw an exception
    }
    
    int getMin() {
        if(!st.empty()) {
            return st.top().second;
        }
        return -1; // or throw an exception
    }
};

int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl; // Returns -3
    minStack.pop();
    cout << minStack.top() << endl;    // Returns 0
    cout << minStack.getMin() << endl; // Returns -2
    return 0;
}