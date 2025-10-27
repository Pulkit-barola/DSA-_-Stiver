#include<bits/stdc++.h>
using namespace std;

string removeoutermostparentsis(string s){
    stack<char>st;
    string ans = "";
    for(char c : s){
        if(c == '('){
            if(!st.empty()){
                ans += "(";
            }
            st.push('(');
        }
        else{
            st.pop();
            if(!st.empty()){
                ans += ")";
            }
        }
    }
    return ans;
}

int main(){
    string s = "((()))";

    string result = removeoutermostparentsis(s);
    cout<<result;
}