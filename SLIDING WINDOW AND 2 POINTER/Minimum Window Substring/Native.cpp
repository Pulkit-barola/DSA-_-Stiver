#include <bits/stdc++.h>
using namespace std;
    bool isValid(string &window, string &t) {
        vector<int> freq(256, 0);

        // Step 1: t ki frequency
        for (char c : t) freq[c]++;

        // Step 2: window se subtract
        for (char c : window) freq[c]--;

        // Step 3: check missing characters
        for (char c : t) {
            if (freq[c] > 0) return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        int n = s.size();
        int minLen = INT_MAX;
        string ans = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                string window = s.substr(i, j - i + 1);

                if (isValid(window, t)) {
                    if (window.length() < minLen) {
                        minLen = window.length();
                        ans = window;
                    }
                    break; // chhota window isi i ke liye nahi milega
                }
            }
        }
        return ans;
    }

int main() {
    string s, t;
    cin >> s >> t;

    string result = minWindow(s, t);
    cout << "Minimum window substring: " << result << endl;

    return 0;
}
