#include<bits/stdc++.h>
using namespace std;

int createAtoi(string s) {
    int n = s.size();
    int i = 0;
    while(i<n && s[i]==' '){
        i++;
    }
    int sign = 1;
    if(i<n){
        if(s[i]=='+'){
            i++;
        }
        else if(s[i]=='-'){
            sign =  -1;
            i++;
        }
    }
    string num = "";
    while(i<n && isdigit(s[i])){
        num+=s[i];
        i++;
    }
    if(num.size()==0){
        return 0;
    }
    long long Number = stoll(num)*sign;
    if(Number>INT_MAX){
        return INT_MAX;
    }
    else if(Number<INT_MIN){
        return INT_MIN;
    }
    return Number;
}

int main(){
        string s;
    cin >> s;                // take input
    cout << createAtoi(s);   // call your function
    return 0;
}