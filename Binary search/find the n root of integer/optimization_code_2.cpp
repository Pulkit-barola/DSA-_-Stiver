#include <bits/stdc++.h>
using namespace std;

long long power(int base, int exp, long long m) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
        if (result > m) return result; // prevent overflow & unnecessary calc
    }
    return result;
}

int NthRoot(int n, int m) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long midpower = power(mid, n, m);

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
