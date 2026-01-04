#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int arr[100];   // fixed size array
    int top;        // index of top element

public:
    Stack() {
        top = -1;   // stack is empty
    }

    // Push operation
    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = x;
        cout << x << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top] << " popped from stack\n";
        top--;
    }

    // Peek operation
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Is stack empty? " << s.isEmpty() << endl;

    return 0;
}
