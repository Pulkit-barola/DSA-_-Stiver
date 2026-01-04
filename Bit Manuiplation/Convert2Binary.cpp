#include <bits/stdc++.h>
using namespace std;

string convert2binary(int n) {
    string res = "";

    while (n > 1) {
        if (n % 2 == 1)
            res += '1';
        else
            res += '0';
        n = n / 2;
    }

    // last bit (n becomes 1)
    res += '1';

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << convert2binary(n) << endl;
}
