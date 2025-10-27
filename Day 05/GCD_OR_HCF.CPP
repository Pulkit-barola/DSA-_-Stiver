// #include<bits/stdc++.h>
// using namespace std;

// int calcGCD(int n, int m){
//     for(int i = min(n,m); i>=1; i--){
//         if(n%i==0 && m%i ==0){
//             return i;
//             break;
//         }
//     }
// }

// int main(){
//     int n,m;
//     cout<<"Enter the first number";
//     cin>>n;

//     cout<<"Enter the second number";
//     cin>>m;

//     cout << "GCD: " << calcGCD(n, m) << endl;
// }

// this is not best case they can slow for large number so for remove this problem we use ECULDIEN ALGORITHUM

#include<bits/stdc++.h>
using namespace std;

int calcGCD(int n, int m){
    while(n>0&&m>0){
        if(n>m){
            n = n%m;
        }
        else{
            m = m%n;
        }
    }
    if(n==0){
        return m;
    }
    else{
        return n;
    }
}

int main(){
    int n,m;
    cout<<"Enter the first number";
    cin>>n;

    cout<<"Enter the second number";
    cin>>m;

    cout << "GCD: " << calcGCD(n, m) << endl;
}
// eculden algo