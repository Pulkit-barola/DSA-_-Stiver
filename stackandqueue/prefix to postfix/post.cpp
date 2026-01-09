#include <bits/stdc++.h>
using namespace std;

string prefixToPostfix(string s) {
    stack<string> st;

    // Traverse from right to left
    for (int i = s.length() - 1; i >= 0; i--) {
        char ch = s[i];

        // If operand
        if (
            (ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')
        ) {
            string temp = "";
            temp += ch;
            st.push(temp);
        }
        // If operator
        else {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();

            string expr = op1 + op2 + ch;
            st.push(expr);
        }
    }

    return st.top();
}

int main() {
    string prefix;
    cin >> prefix;

    cout << prefixToPostfix(prefix);
    return 0;
}
