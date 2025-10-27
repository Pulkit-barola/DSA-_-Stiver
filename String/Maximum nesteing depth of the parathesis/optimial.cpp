#include<bits/stdc++.h>
using namespace std;

int maximumdepth(string s) {
    int currdepth = 0, maxdepth = 0;
    for(char c : s) {
        if(c == '(') {
            currdepth++;
            maxdepth = max(maxdepth, currdepth);
        }
        else if(c == ')') {
            currdepth--;
        }
    }
    return maxdepth;
}


int main(){
    string s = "((1+2)*(3+4))";
    int result = maximumdepth(s);
    cout<<result;
}