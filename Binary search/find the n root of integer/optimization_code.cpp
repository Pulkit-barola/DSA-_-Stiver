#include <bits/stdc++.h>
using namespace std;

long long power(int Base, int Exp) {
    long long result = 1;
    for (int i = 0; i < Exp; i++) {
        result *= Base;
        if (result > 1e18) return result; // safety to avoid overflow
    }
    return result;
}

int NthRoot(int n, int m) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long midpower = power(mid, n);

        if (midpower == m) {
            return mid; // exact root found
        }
        else if (midpower > m) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1; // no integer nth root
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << NthRoot(n, m) << endl;
    return 0;
}
