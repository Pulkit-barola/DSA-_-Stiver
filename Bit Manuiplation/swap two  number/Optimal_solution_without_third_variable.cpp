#include<bits/stdc++.h>
using namespace std;

int swapNo(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b; 
}

int main(){
    int a,b;
    cout<<"Enter a and b both"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Before swapping "<<a<<" "<<b<<" "<<endl;
     swapNo(a,b);
     cout << "a = " << a << ", b = " << b << endl;
}