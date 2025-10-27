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
    int num = 0;
        while(i<n && isdigit(s[i])){
            int digit = s[i]-'0';
            if(num>(INT_MAX-digit)/10){
                if(sign == 1){
                    return INT_MAX;
                }else{
                    return INT_MIN;
                }
            }
            num = num*10+digit;
            i++;
        }
    return num*sign;
}

int main(){
    string s;
    cin >> s;                // take input
    cout << createAtoi(s);   // call your function
    return 0;
}