#include<bits/stdc++.h>
using namespace std;

string longestcommonprefix(vector<string> &s){
    int n = s.size();
    string prefix = "";

    if(s.empty()){
        return "-1";
    }

    for(int i = 0; i<s[0].size(); i++){
        char ch = s[0][i];

        //check this character from all string
        for(int j = 1; j<n; j++){
            // ifout of range or mismatch 
            if(i>=s[j].size() || s[j][i]!=ch){
                if(s.empty()){
                    return "-1";
                }
                else{
                    return prefix;
                }
            }
        }
        prefix += ch;
    }
    return prefix;
}