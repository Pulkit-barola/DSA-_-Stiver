// basic + datatype
// #include <iostream>
// using namespace std;
// int main() {
// cout << "Hello DSA journey!" << endl;
//   int x, y;
//   cout << "Enter two numbers: ";
//   cin >> x >> y;
//   cout << "Sum: " << x + y << endl;
//   return 0;
// }


// if else 
// adult case scenario
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if(age >= 18){
//         cout<<"ADULT"<<endl;

//     }else{
//         cout<<"Not adult"<<endl;
//     }

// }

// grading if else
// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter marks :- "<<endl;
//     cin>>marks;

//     if(marks<25){
//         cout<<"YOUR GRADE IS F"<<endl;
//     }
//     else if(marks>=25 && marks<=44){
//         cout<<"YOUR GRADE IS E"<<endl;
//     }
//     else if(marks>=45 && marks<=49){
//         cout<<"YOUR GRADE IS D"<<endl;
//     }
//     else if(marks>=50 && marks<=59){
//         cout<<"YOUR GRADE IS C"<<endl;
//     }
//     else if(marks>=60 && marks<=79){
//         cout<<"YOUR GRADE IS B"<<endl;
//     }
//     else if(marks>=80 && marks<=100){
//         cout<<"YOUR GRADE IS A"<<endl;
//     }
//     else{
//         cout<<"Wrong choice!!"<<endl;
//     }
// }


// switch statment
// by day wise switch statement
#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"WEDNESDAY"<<endl;
            break;
        case 4:
            cout<<"WEDNESDAY"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
    }
}