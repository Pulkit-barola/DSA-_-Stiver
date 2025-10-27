#include<bits/stdc++.h>
using namespace std;

long long nCrfunction(int n,int r){
    long long resultant = 1;
    for(int i=0; i<r; i++){
        resultant = resultant*(n-i);
        resultant = resultant/(i+1);
    }
    return {resultant};
}

void printNthRow(int n) {
    for (int c = 0; c <= n; c++) {
        cout << nCrfunction(n, c) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter row number: ";
    cin >> n;

    cout << "Row " << n << " of Pascal's Triangle: ";
    printNthRow(n);

    return 0;
}