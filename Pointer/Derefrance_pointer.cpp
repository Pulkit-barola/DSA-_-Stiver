#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 45;

    cout<<&a<<endl;      // for finding the address value
    cout<<*(&a)<<endl;      // using derefANCE operator to find the value


    float b = 45;
    float *ptr = &b;

    cout<<ptr<<endl;  //they give the output of thr address of b
    cout<<*ptr<<endl;   // they give the value b by usiing derefance operator
}