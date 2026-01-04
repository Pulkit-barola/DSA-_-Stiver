#include <bits/stdc++.h>
using namespace std;

int convertToDecimal(string bin) {
    int value = 0;
    int power = 1;   // represents 2^0

    // iterate from last bit to first bit
    for (int i = bin.size() - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            value += power;
        }
        power *= 2;  // move to next power of 2
    }

    return value;
}

int main() {
    string bin;
    cin >> bin;

    cout << convertToDecimal(bin) << endl;
    return 0;
}
