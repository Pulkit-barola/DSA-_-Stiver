#include <bits/stdc++.h>
using namespace std;

// Function to print nth row of Pascal's Triangle (0-based indexing)
void printNthRow(int n) {
    long long val = 1; // first element is always 1
    cout << val << " ";
    
    for (int r = 1; r <= n; r++) {
        val = val * (n - r + 1) / r;  // nCr relation
        cout << val << " ";
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
