#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int maxDepth = 0;
    stack<char> st;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
            maxDepth = max(maxDepth, (int)st.size());
        }
        else if(s[i] == ')') {
            st.pop();
        }
    }
    return maxDepth;
}


int main(){
    string s = "((1+2)*(3+4))";
    int result = maxDepth(s);
    cout<<result;
}