#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactorsOnce(int n) {
    vector<int> factors;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);   // ✅ ek baar add
            while (n % i == 0) {
                n /= i;            // n ko completely reduce
            }
        }
    }

    if (n > 1)
        factors.push_back(n);      // last prime factor

    return factors;
}

int main() {
    int n;
    cin >> n;

    vector<int> ans = primeFactorsOnce(n);
    for (int x : ans)
        cout << x << " ";

    return 0;
}