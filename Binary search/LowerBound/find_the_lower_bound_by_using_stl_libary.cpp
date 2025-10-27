#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4,5,6,7,8,9,10,12,19,26};

    int x = 8;
    auto it = lower_bound(arr.begin(), arr.end(), x);

    cout << "Lower bound of " << x << " is at index " << (it - arr.begin()) << endl;

    // int arr[] = {4,5,6,7,8,9,10,12,19,26};
    // int n = sizeof(arr) / sizeof(arr[0]); // safer way
    // int X;

    // cout << "Give the X value: ";
    // cin >> X;

    // auto it = lower_bound(arr, arr + n, X);

    // if (it == arr + n) {
    //     cout << "No element >= " << X << " found\n";
    // } else {
    //     cout << "Lower bound of " << X << " is at index " << (it - arr) 
    //          << " with value " << *it << endl;
    // }

    // return 0;
}