#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Function to check if character is an operator
bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

// Infix to Postfix conversion
string infixToPostfix(string s) {
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // If operand, add to postfix
        if (isalnum(ch)) {
            postfix += ch;
        }
        // If opening bracket, push to stack
        else if (ch == '(') {
            st.push(ch);
        }
        // If closing bracket, pop till '('
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }
        // If operator
        else if (isOperator(ch)) {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cin >> infix;

    cout << infixToPostfix(infix) << endl;
    return 0;
}
