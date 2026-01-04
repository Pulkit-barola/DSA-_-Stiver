#include <bits/stdc++.h>
using namespace std;

int priority(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3;
    return -1;
}

string infixToPostfix(string s) {
    stack<char> st;
    string ans = "";
    int n = s.size();

    for (int i = 0; i < n; i++) {

        // 1️⃣ If operand (a-z, A-Z, 0-9)
        if (
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= '0' && s[i] <= '9')
        ) {
            ans += s[i];
        }

        // 2️⃣ If opening bracket
        else if (s[i] == '(') {
            st.push(s[i]);
        }

        // 3️⃣ If closing bracket
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop(); // pop '('
        }

        // 4️⃣ If operator
        else {
            while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // 5️⃣ Pop remaining operators
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << infixToPostfix(s);
    return 0;
}
