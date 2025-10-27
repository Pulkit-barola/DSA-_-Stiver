// sum of n number by recursion 
// have 2 types 1) parametrized 2) function

// #include<bits/stdc++.h>
// using namespace std;

// void add(int i, int sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }
//     add(i-1,sum+i);
// }

// int main(){
//     int i,sum;
//     cout<<"Enter the any number ";
//     cin>>i;
//     add(i,0); // the inianl value which icnreament in sum i fixed into 5

// 
// coding ninjas
// #include<iostream>
// using namespace std;

// long long sumFirstN(long long n) {
//     long long sum = 0;  // Changed sum to long long
//     for (long long i = 1; i <= n; i++) {  // Loop should run till 'n'
//         sum += i;
//     }
//     return sum;  // Return the final sum
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sumFirstN(n);

// }
// in this code we have optimal problem time consuming high
// these as also optimal problem
// for reduce optimal problem we usev function (n*(n+1))/2
#include<iostream>
using namespace std;

long long sumFirstN(long long n) {
    return (n*(n+1))/2; // Return the final sum
}
int main(){
    int n;
    cin>>n;
    cout<<sumFirstN(n);

}
// functional
#include<bits/stdc++.h>
using namespace std;
 long long sumFirstN(long long n) {
    long long sum = 0;  // Changed sum to long long
     if(n==0){
         return 0;
     }
     return n + sumFirstN(n-1);  // Return the final sum
}
 int main(){
    int n;
    cin>>n;
    cout<<sumFirstN(n);
}
