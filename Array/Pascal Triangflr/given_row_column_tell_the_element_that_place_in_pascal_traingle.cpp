#include<bits/stdc++.h>
using namespace std;

long long Pascal(int n,int r){
    long long resultant = 1;
    for(int i=0; i<r; i++){
        resultant = resultant*(n-i);
        resultant = resultant/(i+1);
    }
    return {resultant};
}



int main() {
    int r, c;
    cout << "Enter row (r): ";
    cin >> r;
    cout << "Enter column (c): ";
    cin >> c;

    if (c > r) {
        cout << "Invalid! Column cannot be greater than row." << endl;
    } else {
        cout << "Element at (" << r << "," << c << ") = " << Pascal(r-1, c-1) << endl;
    }

    return 0;
}