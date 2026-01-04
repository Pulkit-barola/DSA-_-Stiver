#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    queue<int> q;

public:
    // Push operation
    void push(int x) {
        int size = q.size();
        q.push(x);

        // Rotate previous elements
        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }

        cout << x << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (q.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << q.front() << " popped from stack\n";
        q.pop();
    }

    // Peek operation
    int top() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q.front();
    }

    // Check empty
    bool isEmpty() {
        return q.empty();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.pop();

    cout << "Is stack empty? " << s.isEmpty() << endl;

    return 0;
}
