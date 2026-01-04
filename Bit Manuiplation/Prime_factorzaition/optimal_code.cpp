#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;
int spf[MAXN + 1];

// Step 1: Build SPF array
void buildSPF() {

    // initially har number khud ka factor maan lo
    for (int i = 1; i <= MAXN; i++) {
        spf[i] = i;
    }

    // sieve style loop
    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) {   // i prime hai
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

// Step 2: Factorization using SPF
vector<int> getPrimeFactors(int n) {
    vector<int> factors;

    while (n != 1) {
        factors.push_back(spf[n]);
        n = n / spf[n];
    }

    return factors;
}

int main() {
    buildSPF();

    vector<int> queries = {60, 84, 97};

    for (int i = 0; i < queries.size(); i++) {
        vector<int> ans = getPrimeFactors(queries[i]);

        for (int x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
