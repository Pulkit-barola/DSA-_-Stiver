#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

vector<int> primeFactorsOnce(int n) {
    vector<int> factors;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            factors.push_back(i);     // ✅ sirf ek baar add
            while (n % i == 0) {
                n /= i;              // n ko poora divide
            }
        }
    }
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
