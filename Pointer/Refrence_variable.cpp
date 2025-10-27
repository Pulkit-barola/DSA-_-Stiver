// #include<bits/stdc++.h>
// using namespace std;
    ///refrence variable
// int main(){
//     int a = 20;
//     int &b = a;
//     b = 02;
//     cout<<b<<endl;
//     cout<<a<<endl;
// }


   // pass  by refrence useing refrence variable

#include<bits/stdc++.h>
using namespace std;

void changeA(int &a){
    a = 20;
    cout<<a<<endl;
}

int main(){
    int a = 4;
    changeA(a);
    cout<<a<<endl;

}
