#include <bits/stdc++.h>
using namespace std;

string postfixToPrefix(string s) {
    stack<string> st;

    for (int i = 0; i < s.length(); i++) {
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
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();

            string expr = ch + op1 + op2;
            st.push(expr);
        }
    }

    return st.top();
}

int main() {
    string postfix;
    cin >> postfix;

    cout << postfixToPrefix(postfix);
    return 0;
}
