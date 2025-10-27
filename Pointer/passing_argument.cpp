// #include<bits/stdc++.h> 
// using namespace std;

// void changeA(){
//     int a = 25;
//     cout<<a<<endl;
// }

// int main(){

//     int a = 0;
//     changeA();
//     cout<<a<<endl;
// }

// pass by refrence

#include<bits/stdc++.h>
using namespace std;

void changeA(int *ptr){
    *ptr = 20; // using derefrance value
    cout<<*ptr<<endl;
}

int main(){
    int a =29;
    changeA(&a);

    cout<<a<<endl;
}