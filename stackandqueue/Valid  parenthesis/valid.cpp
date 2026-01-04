#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        // push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            // closing bracket but stack empty → invalid
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            // mismatch check
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // stack must be empty at end
    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}
