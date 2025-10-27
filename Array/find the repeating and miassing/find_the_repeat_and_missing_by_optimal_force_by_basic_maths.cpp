#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> &a) {
    long long n = a.size();

    // expected sums
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += 1LL * a[i] * a[i];
    }

    // differences
    long long val1 = S - SN;       // x - y
    long long val2 = S2 - S2N;     // x^2 - y^2
    val2 = val2 / val1;            // x + y

    long long x = (val1 + val2) / 2; // repeating number
    long long y = x - val1;          // missing number

    return {(int)x, (int)y};
}

int main() {
    vector<int> arr = {2, 3, 1, 5, 1};
    vector<int> ans = findMissingRepeatingNumbers(arr);
    cout << "Repeating: " << ans[0] << ", Missing: " << ans[1] << endl;
    return 0;
}
