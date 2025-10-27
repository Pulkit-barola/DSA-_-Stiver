#include<bits/stdc++.h>
using namespace std;

int maximumdepth(string s){
    int maxdepth = 0;
        for(int i = 0; i<s.size(); i++){
            // if(s[i]==')'){
            //     return 0;
            // }
            if(s[i]=='('){
                int currdepth = 1;
                    for(int j = i+1; j<s.size(); j++){
                        maxdepth = max(maxdepth, currdepth);
                    if(s[j]=='(') currdepth++;
                    else if(s[j]==')') currdepth--;
                    if(currdepth == 0) break;
                }
            }
            if(!s.empty() && s[0] == ')') {
                return 0;
            }
        }
        return maxdepth;
    
}

int main(){
    string s = "((1+2)*(3+4))";
    int result = maximumdepth(s);
    cout<<result;
}