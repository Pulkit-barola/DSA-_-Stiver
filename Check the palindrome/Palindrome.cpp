#include <bits/stdc++.h>
using namespace std;
bool f (int i, string &s){
    if (i >= s.size() / 2) {
        return true; // Base case: reached the middle of the string
    }
    if (s[i] != s[s.size() - i - 1]) {
        return false; // Characters at positions i and size-i-1 are not equal
    }
    return f(i + 1, s); // Recursive call with the next index
}

int main(){
    string s;
    cin >> s; // Input the string to check for palindrome
    if (f(0, s)) {
        cout << "YES"; // The string is a palindrome
    } else {
        cout << "NO"; // The string is not a palindrome
    }
    return 0;
}